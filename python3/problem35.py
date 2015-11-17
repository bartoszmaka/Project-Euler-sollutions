from math import sqrt
from itertools import permutations

def is_prime(n):
	for i in range(2, int(sqrt(n))+1, 1):
		if n%i == 0:
			return False
	return True

def is_circular(n):
	tmp = list(permutations(str(n)))
	for i in tmp:
		i = int(''.join(i))
		perms.append(i)
		


for i in range(100,1000000):
	if is_prime(i) == True:
		if is_circular == True:
			result.append(i)