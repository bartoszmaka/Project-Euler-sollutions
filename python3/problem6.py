sum1, sum2 = 0, 0
for i in range(101):
	sum1 += i
	sum2 += i**2
else:
	sum1 = sum1**2
	print (sum1,'-',sum2,'=',sum1-sum2)