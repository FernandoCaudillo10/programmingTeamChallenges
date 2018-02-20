def main():
	data = int(raw_input())
	tcases = int(raw_input())
	count = 0
	for i in range(tcases):
		count += data - int(raw_input())
		
	print count + data

main()
