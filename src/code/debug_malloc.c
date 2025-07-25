#include "libc64/os_malloc.h"
#include "debug_arena.h"
#include "printf.h"
#include "translation.h"

#define LOG_SEVERITY_NOLOG 0
#define LOG_SEVERITY_ERROR 2
#define LOG_SEVERITY_VERBOSE 3

void __osDisplayArena(Arena* arena);

Arena sDebugArena;

#if IS_DEBUG_HEAP_ENABLED
s32 gDebugArenaLogSeverity = LOG_SEVERITY_ERROR;

void DebugArena_CheckPointer(void* ptr, u32 size, const char* name, const char* action) {
    if (ptr == NULL) {
        if (gDebugArenaLogSeverity >= LOG_SEVERITY_ERROR) {
            PRINTF(T("%s: %u バイトの%sに失敗しました\n", "%s: %u bytes %s failed\n"), name, size, action);
#if PLATFORM_GC
            __osDisplayArena(&sDebugArena);
#endif
            return;
        }
    } else if (gDebugArenaLogSeverity >= LOG_SEVERITY_VERBOSE) {
        PRINTF(T("%s: %u バイトの%sに成功しました\n", "%s: %u bytes %s succeeded\n"), name, size, action);
    }
}

#define DEBUG_ARENA_CHECK_POINTER(ptr, size, name, action) DebugArena_CheckPointer(ptr, size, name, action)
#else
#define DEBUG_ARENA_CHECK_POINTER(ptr, size, name, action) (void)0
#endif

void* DebugArena_Malloc(u32 size) {
    void* ptr = __osMalloc(&sDebugArena, size);

    DEBUG_ARENA_CHECK_POINTER(ptr, size, "debug_malloc", T("確保", "Secure"));
    return ptr;
}

#if IS_DEBUG_HEAP_ENABLED
void* DebugArena_MallocDebug(u32 size, const char* file, int line) {
    void* ptr = __osMallocDebug(&sDebugArena, size, file, line);

    DEBUG_ARENA_CHECK_POINTER(ptr, size, "debug_malloc_DEBUG", T("確保", "Secure"));
    return ptr;
}
#endif

void* DebugArena_MallocR(u32 size) {
    void* ptr = __osMallocR(&sDebugArena, size);

    DEBUG_ARENA_CHECK_POINTER(ptr, size, "debug_malloc_r", T("確保", "Secure"));
    return ptr;
}

#if IS_DEBUG_HEAP_ENABLED
void* DebugArena_MallocRDebug(u32 size, const char* file, int line) {
    void* ptr = __osMallocRDebug(&sDebugArena, size, file, line);

    DEBUG_ARENA_CHECK_POINTER(ptr, size, "debug_malloc_r_DEBUG", T("確保", "Secure"));
    return ptr;
}
#endif

void* DebugArena_Realloc(void* ptr, u32 newSize) {
    ptr = __osRealloc(&sDebugArena, ptr, newSize);
    DEBUG_ARENA_CHECK_POINTER(ptr, newSize, "debug_realloc", T("再確保", "Re-secure"));
    return ptr;
}

#if IS_DEBUG_HEAP_ENABLED
void* DebugArena_ReallocDebug(void* ptr, u32 newSize, const char* file, int line) {
    ptr = __osReallocDebug(&sDebugArena, ptr, newSize, file, line);
    DEBUG_ARENA_CHECK_POINTER(ptr, newSize, "debug_realloc_DEBUG", T("再確保", "Re-secure"));
    return ptr;
}
#endif

void DebugArena_Free(void* ptr) {
    __osFree(&sDebugArena, ptr);
}

#if IS_DEBUG_HEAP_ENABLED
void DebugArena_FreeDebug(void* ptr, const char* file, int line) {
    __osFreeDebug(&sDebugArena, ptr, file, line);
}
#endif

void* DebugArena_Calloc(u32 num, u32 size) {
    void* ret;
    u32 n = num * size;

    ret = __osMalloc(&sDebugArena, n);
    if (ret != NULL) {
        bzero(ret, n);
    }

    DEBUG_ARENA_CHECK_POINTER(ret, n, "debug_calloc", T("確保", "Secure"));
    return ret;
}

#if PLATFORM_GC && IS_DEBUG_HEAP_ENABLED
void DebugArena_Display(void) {
    // Likely copypasted from ZeldaArena_Display, should say "Debug"
    PRINTF(T("ゼルダヒープ表示\n", "Zelda heap display\n"));
    __osDisplayArena(&sDebugArena);
}
#endif

void DebugArena_GetSizes(u32* outMaxFree, u32* outFree, u32* outAlloc) {
    ArenaImpl_GetSizes(&sDebugArena, outMaxFree, outFree, outAlloc);
}

void DebugArena_Check(void) {
    __osCheckArena(&sDebugArena);
}

void DebugArena_Init(void* start, u32 size) {
#if IS_DEBUG_HEAP_ENABLED
    gDebugArenaLogSeverity = LOG_SEVERITY_NOLOG;
#endif
    __osMallocInit(&sDebugArena, start, size);
}

void DebugArena_Cleanup(void) {
#if IS_DEBUG_HEAP_ENABLED
    gDebugArenaLogSeverity = LOG_SEVERITY_NOLOG;
#endif
    __osMallocCleanup(&sDebugArena);
}

s32 DebugArena_IsInitialized(void) {
    return __osMallocIsInitialized(&sDebugArena);
}
