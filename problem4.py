def palindrome(n):
	return True if str(n)==str(n)[::-1] else False

pal = [x for x in range(997799,800000,-1) if palindrome(x)]

for num in pal:
	for i in range(999,100,-1):
		if (num%i == 0) and (num/i<1000):
			print(num,i,num/i)
