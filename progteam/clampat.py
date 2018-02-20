import math
import time
def main():
	start = time.time()
	for i in range(int(raw_input())):
		num = int(raw_input())
		print (math.factorial(num)) % 1000000007
	end = time.time()
	print (end-start, " seconds")
			
main()
