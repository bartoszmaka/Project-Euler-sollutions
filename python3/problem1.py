threes = [i for i in range(1000) if not i%3]
fives = [i for i in range(1000) if not i%5]

sum = 0
for i in threes:
	sum += i

for i in fives:
	sum += i

print(i)
