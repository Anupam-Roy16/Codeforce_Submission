n=int(input())
for i in range(n):
    x,y=map(int,input().split())
    v=list(map(int,input().split()))
    if y%2!=0:
        t=(y-1)/2
        for j in range(x):
            if v[j]<=t:
                print("0",end=" ")
            else:
                print("1",end=" ")
        print("\n")
    else:
        y/=2
        r=v.count(y)
        w=r/2
        w=(int)(w)
        r=r-w
        s=max(r,w)
        t=min(r,w)
        q=0
        for j in range(x):
            if v[j]<y:
                print("0",end=" ")
            elif v[j]>y:
                print("1",end=" ")
            else:
                if q==s:
                    print("0", end=" ")
                else:
                    print("1", end=" ")
                    q+=1
        print("\n")














