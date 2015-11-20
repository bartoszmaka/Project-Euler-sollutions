from time import time

factorial = [0,1,2,6,24,120,720,5040,40320,362880]

liczby = []
begin = time()
appended = False
i = 145;

while appended == False:
    suma = 0
    i+=1
    for a in list(str(i)):
        suma += factorial[int(a)]
    else:
        if suma == i:
            liczby.append(i)
            appended = True
print(liczby)
print('execution time: {0:.4f}sec'.format(time()-begin))
