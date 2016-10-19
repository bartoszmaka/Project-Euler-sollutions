def foo():
	for j in range (3000,10000000):
		for i in range(1,21):
			if j%i != 0 :
				break
		else:
			return j

print(foo())