def main():
	string = raw_input()
	dic = {}
	for c in string:
		if c not in dic:
			dic[c] = 1
		else:
			dic[c] += 1
	total = 0
	minimum = 100
	for k in dic:
		total += dic[k] ** 2
		if dic[k] < minimum and len(dic) == 3:
				minimum = dic[k]
	if minimum != 100:
		print total + minimum * 7
	else:
		print total
		
main()
