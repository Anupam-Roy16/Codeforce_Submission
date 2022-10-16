n=int(input())
for i in range(n):
    x,y=map(int,input().split())
    v=list(map(int,input().split()))
    p=0
    q=0
    r=0
    for j in range(x):
        p+=v[j]
        if v[j]%2==0:
            r+=1
        else:
            q+=1
    for j in range(y):
        w,s= map(int,input().split())
        if w==0 and s%2==0:
            p+=(r*s)
        elif w==0 and s%2!=0:
            p += (r * s)
            q+=r
            r=0
        elif w==1 and s%2==0:
            p += (q * s)
        else:
            p += (q * s)
            r+=q
            q=0
        print(p)















