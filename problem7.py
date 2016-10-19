from math import sqrt

def primes():
	i = 1
	counter = 0
	while counter<10001:
		i += 1
		end = int(sqrt(i))+1  
		for j in range(2,end):	#szukanie faktoriałów
			if i%j == 0:
				break
		else:
			print(counter)
			counter += 1
	else:
		print(counter,' Prime: ', i)


print(primes())