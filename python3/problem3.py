def factorize(n):
	i = 2
	factors = []
	while n != 1:
		if n%i == 0:
			print(n,'\t|',i,' ==> ',int(n/i))
			n = int(n/i)
			factors.append(i)
			i = 2
		else:
			i+= 1
	else:
		print(factors)
		return max(factors)


number = 256
print(factorize(number))