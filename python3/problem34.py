from time import time

pythonsarrayofshame = [0,1,2,6,24,120,720,5040,40320,362880]

liczby = []
begin = time()

for i in range(3,1000000):
    suma = 0
    for a in list(str(i)):
        suma += pythonsarrayofshame[int(a)]
    else:
        if suma == i:
            liczby.append(i)

print(liczby)
print('execution time: {0:.4f}sec'.format(time()-begin))
