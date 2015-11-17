a,b = 1,1
i = 2
while(len(str(b)))<1000:
	a,b = b,a+b
	i+=1
else:
	print(i,':')
	print(b)

