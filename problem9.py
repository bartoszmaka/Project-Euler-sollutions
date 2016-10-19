from math import sqrt

for a in range (1,1000):
	for b in range(1,1000):
		a2, b2 = a**2, b**2
		c2 = a2+b2
		c = sqrt(c2)
		if a+b+c == 1000:
			print(a,b,c,'=>', a*b*c)

