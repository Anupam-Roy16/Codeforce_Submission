import math
x=int(input())
for i in range(x):
    n=int(input())
    if n%2!=0:
        n-=1
        n/=2
        n=(int)(n)
        p=n
        n=n*(n+1)
        n=n+p+1
        print((int)(math.sqrt(n)))
    else:
        n -= 2
        n /= 2
        n = (int)(n)
        p = n
        n = n * (n + 1)
        n = n + p + 1
        print((int)(math.sqrt(n)))









