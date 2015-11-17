#brute force

tri =  [n*(n+1)/2 for n in range(1100001)]
pent = [n*(3*n-1)/2 for n in range(110001)]
hexa = [n*(2*n-1) for n in range(110001)]

x = 1533776805
print('T[{0}] = P[{1}] = H[{2}]'.format(tri.index(x), pent.index(x), hexa.index(x)))
x = 2147450880
print('T[{0}] = P[{1}] = H[{2}]'.format(tri.index(x), pent.index(x), hexa.index(x)))

