from time import time
begin = time()
double_base_palindromes = []

for i in range (1000000):
    if str(i) == str(i)[::-1]:
        if str(bin(i))[2:] == str(bin(i))[:1:-1]:
            double_base_palindromes.append(i)

print(sum(double_base_palindromes))
print('execution time: {0:.4f} sec'.format(time() - begin))
