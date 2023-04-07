for i in range(int(input())):
    n,x,y,p,q=map(int,input().split())
    r=min(x-1,n-x)
    s=min(y-1,n-y)
    d=min(r,s)
    #print(d,r)
    if d==r:
        t=x
    else:
        t=y
    r = min(p-1, n - p)
    s = min(q-1, n - q)
    d = min(r, s)
    if d == r:
        u = p
    else:
        u = q
    #print(u,t)
    f=abs(u-t)
    r=abs(n+1-u)
   # print(r,t)
    y=abs(r-t)
   # print(y)
    print(min(f,y))






