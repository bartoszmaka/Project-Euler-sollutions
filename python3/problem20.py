def silnia(n):
	return 1 if n == 1 else silnia(n-1)*n

number = str(silnia(100))
sum = 0
for i in number:
	sum += int(i)
else:
	print(sum)