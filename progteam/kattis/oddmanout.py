def main():
	
	for t in range(int(raw_input())):
				
		d = dict()
		
		raw_input()

		for n in raw_input().split(" "):
			
			if n in d:
				d[n] += 1
			else:
				d[n] = 1

		for i in d:
			if d[i] == 1:
				print "Case #"+str(t+1)+": "+str(i)
		

main()
