n=int(input())
v=list(map(int,input().split()))
v.sort()
if n==1:
    print("0")
    v1=[]
    v1=v
elif n%2!=0:
    t=(n-1)/2
    t=(int)(t)
    print(t)
    v1=[0]*n
    i=1
    j=0
    k=0
    while 1:
        v1[i]=v[j]
        i+=2
        j+=2
        k+=1
        if(k==t):
            break
    i = 0
    j = 1
    k = 0
    while 1:
        v1[i]=v[j]
        i+=2
        j+=2
        k+=1
        if(k==(t)):
            v1[i]=v[j-1]
            break
else:
    t = (n / 2)
    t-=1
    t=(int)(t)
    print(t)
    v1 = [0] * n
    i = 1
    j = 0
    k = 0
    while 1:
        v1[i] = v[j]
        i += 2
        j += 2
        k += 1
        if (k == (t+1)):
            break
    i = 0
    j = 1
    k = 0
    while 1:
        v1[i] = v[j]
        i += 2
        j += 2
        k += 1
        if (k == (t + 1)):
            break
for i in range(0,n):
    print(v1[i],end=" ")

















