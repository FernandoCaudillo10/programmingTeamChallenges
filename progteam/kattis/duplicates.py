def createCount(line):	
	line = line.split(" ")
	lst = []
	for w in line:
		if w in lst:
			return "no"
		else:
			lst.append(w)
	
	return "yes"

def main():
	line = raw_input();
	
	print createCount(line)


main()
