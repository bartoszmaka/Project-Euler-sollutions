from time import time

def count_divs(n):
	factors = {}
	i = 2

	while n!=1:
		if n%i == 0:
			n = int(n/i)
			if i in factors:
				factors[i] += 1
			else:
				factors[i] = 2
			i = 2
		else:
			i += 1

	result = 1
	for i in factors.values():
		result *= i
	else:
		return result
		

number, i, result = 1,1,1
begin = time()
while(result<500):
	i+=1
	number+=i
	result = count_divs(number)
else:
	print('n[{0}]: {1} -> {2}'.format(i,number,result))
	print('execution time: {0:.4f} sec'.format(time()-begin))