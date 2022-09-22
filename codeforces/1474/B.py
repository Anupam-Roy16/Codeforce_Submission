import math
n=int(input())
def fun(x):
    l=math.sqrt(x)
    l=(int)(l)
    for i in range(2,l+1):
        if x%i==0:
            return 0
    return 1

for i in range(n):
    x=int(input())
    q=x
    x+=1
    while 1:
        if fun(x)==1:
            break
        x+=1
    p=x
    x+=q
    while 1:
        if fun(x)==1:
            break
        x+=1
    p*=x
    print(p)






















