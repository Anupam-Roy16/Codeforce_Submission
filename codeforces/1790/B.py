n=int(input())
for k in range(n):
    x,y,z=map(int,input().split())
    v=[]
    for i in range(x-1):
        v.append(y-z)
    w=(y-z)*(x-1)
    for i in range(x-1):
        if w>z:
            if (w-z)>(y-z-1):
                v[i]=1
                w=w-y+z+1
            else:
                v[i]=v[i]-w+z
                break
        else:
            break
    print(y-z,end=" ")
    for i in range(x-1):
        print(v[i],end=" ")
    print("\n")