from math import sqrt
#[0]=2,[1]=3,[1999998]=2000000
numbers = [i for i in range(2,2000000)]

for n in numbers:
	if n != 0:
		#print(n)
		start, stop = (n*2)-2, 1999998
		for m in range(start,stop,n):
			numbers[m] = 0
else:
	print(sum(numbers))

