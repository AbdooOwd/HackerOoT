import sys

# Process:
# - Add Scene to scene_table (done by Fast64)
# - Add Scene to scene selection (debug)
# - Add Scene's entrance to entrance_table
# - Add Scene to spec (done by Fast64)
# [WARNING] All of the "done by Fast64" is only done if you haven't checked "custom path"

entrance_table_path = "include/tables/entrance_table.h"
scene_table_path = "include/tables/scene_table.h"
spec_path = "spec/spec"
scene_spec_path = "spec/scenes_n64.inc"
z_select_path = "src/overlays/gamestates/ovl_select/z_select.h"

sScenesArray = "static SceneSelectEntry sScenes[] = {"	# hardcoded, used to detect where the array is
titleScreenZSelect = "{ \"Title Screen\", (void*)MapSelect_LoadTitle, 0 },"

def addEntranceTable(scene_name: str, entrance_id: int = 0) -> None:
	with open(entrance_table_path, 'a') as file:
		# file.write("\n\n/* PYTHON GENERATED CODE AHEAD */\n")
		file.write("\n\n")
		for i in range(4):
			file.write(f"DEFINE_ENTRANCE(ENTR_{scene_name.upper()}_{entrance_id}_{i}, SCENE_{scene_name.upper()}, 0, false, true, TRANS_TYPE_FADE_WHITE, TRANS_TYPE_FADE_WHITE)\n")
	print("- Added scene entrances to entrance table!")

def addSpec(scene_name: str, scene_path: str, room_count: int) -> None:
	print("> Adding scene to spec")

	# safety check, to remove the 'mod_assets' prefix if I ever am paranoid
	correct_dir = scene_path.replace("mod_assets/scenes/", "")

	scene_spec_data = "\n" \
			"\nbeginseg\n" \
			f"\tname \"{scene_name}_scene\"\n" \
			"\tcompress\n" \
			"\tromalign 0x1000\n" \
    		f"\tinclude \"$(BUILD_DIR)/assets/scenes/{correct_dir}/{scene_name}/{scene_name}_scene.o\"\n" \
    		"\tnumber 2\n" \
			"endseg\n"

	room_spec_data: list[str] = []

	for room_id in range(room_count):
			room_spec_data.append(
				"\nbeginseg\n" \
    			f"\tname \"{scene_name}_room_{room_id}\"\n" \
    			"\tcompress\n" \
    			"\tromalign 0x1000\n" \
    			f"\tinclude \"$(BUILD_DIR)/assets/scenes/{correct_dir}/{scene_name}/{scene_name}_room_{room_id}.o\"\n" \
    			"\tnumber 3\n" \
				"endseg\n"
			)
			

	with open(scene_spec_path, 'a') as file:
		file.write(
			 scene_spec_data +
			 "".join(room_spec_data)
			)

	print("- Added scene to spec!")

def addSceneTable(scene_name: str) -> None:
	with open(scene_table_path, 'a') as file:
		file.write(f"\n/* WAKO */ DEFINE_SCENE({scene_name}_scene, none, SCENE_{scene_name.upper()}, SDC_DEFAULT, 0, 0)")
	print("- Added scene to scene table!")

def addSceneSelection(scene_name: str) -> None:
	print("> Adding scene to z_select (MapSelect)...")
	with open(z_select_path, "r") as file:
		content = file.readlines()

	for i, line in enumerate(content):
		if titleScreenZSelect in line:
			content.insert(i + 1, "\t{ \"" + scene_name.capitalize().replace("_", "") + "\", MapSelect_LoadGame, ENTR_" + scene_name.upper() + "_0_0 },\n")
			break
	
	with open(z_select_path, "w") as file:
		file.writelines(content)
	
	print("- Added scene to z_select!")

def main():
	argc = len(sys.argv)

	if argc < 4:
		print(f"Not enough arguments! Usage: {sys.argv[0]} <scene name> <scene path> <room count> [entrance id]")
		quit(-1)

	the_entrance_id: int = 0
	if argc >= 5:
		the_entrance_id = sys.argv[4]
	
	addEntranceTable(sys.argv[1], the_entrance_id)
	addSceneSelection(sys.argv[1])

	if argc >= 4:
		addSceneTable(sys.argv[1])
		addSpec(sys.argv[1], sys.argv[2], int(sys.argv[3]))


if __name__ == "__main__":
	main()