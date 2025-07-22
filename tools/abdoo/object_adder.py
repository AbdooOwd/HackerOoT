import sys
import os

spec_object_marker = "/* OBJECT FOR PYTHON */"
overlays_source_dir = "src/overlays/actors/"
object_table_path = "include/tables/object_table.h"
spec_path = "spec/spec"

def addTable(object_name: str) -> None:
	print("Adding object to object Table...")

	add_this = f"/* 0xWAKO */ DEFINE_OBJECT(object_{object_name.lower()}, OBJECT_{object_name.upper()})\n"

	with open(object_table_path, 'r') as file:
		if add_this in file.read():
			print(" > Object already in object table!")
			# quit(-42)
			return

	with open(object_table_path, 'a') as file:
		file.write(
			"\n" + add_this
		)
	
	print("Added object to object Table!")

def addSpec(object_name: str, dl_name: str) -> None:
	print("Adding object to spec...")

	with open(spec_path, 'r') as file:
		content = file.readlines()
	
	for i, line in enumerate(content):
		# TODO: FIX THIS
		# if f"name \"object_{object_name.lower()}\"" in line:
		# 	print(" > Object already in Spec!")
		# 	return

		if spec_object_marker in line:
			content.insert(i + 1,
				"\nbeginseg\n"
    			f"\tname \"object_{object_name.lower()}\"\n"
    			"\tcompress\n"
    			"\tromalign 0x1000\n"
    			f"\tinclude \"$(BUILD_DIR)/assets/objects/object_{object_name.lower()}/{dl_name}.o\"\n"
    			"\tnumber 6\n"
				"endseg\n\n"
			)

	with open(spec_path, 'w') as file:
		file.writelines(content)
	
	print("Added object to spec!")

def help():
	print(f"Usage: {sys.argv[0]} <object name> <object's DL>")
	quit()

def main():
	argc = len(sys.argv)

	# all of this for a help command? nice

	if argc >= 2:
		if 'help' in sys.argv[1]:
			help()
	elif argc <= 1:
		help()

	if argc <= 0 or argc < 3:
		print ("Not enough arguments!")
		help()

	addSpec(sys.argv[1], sys.argv[2])
	addTable(sys.argv[1])


if __name__ == "__main__":
	main()