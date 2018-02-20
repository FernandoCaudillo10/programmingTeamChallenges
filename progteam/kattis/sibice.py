import math
def main():
	fline = raw_input()
	fline = fline.split(" ")
	
	for i in range(int(fline[0])):
		match = int(raw_input())
		if match <= int(fline[1]) or match <= int(fline[2]) or match <= math.sqrt((int(fline[1])**2)+(int(fline[2])**2)):
			print "DA"
		else:
			print "NE"


main()
