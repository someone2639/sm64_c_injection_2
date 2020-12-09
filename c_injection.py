import sys

atOFile = False

# f = open(sys.argv[1])
f1 = open(sys.argv[1].split(".map")[0]+".inc", "w+")

with open(sys.argv[1]) as f:
	for line in f:
		if sys.argv[2] in line and "text" in line:
			atOFile = True;
		if atOFile:
			tokens = line.split()
			if len(tokens) == 2:
				if "0x" in line:
					f1.write(tokens[1]+" equ 0x"+tokens[0][10:]+"\n")