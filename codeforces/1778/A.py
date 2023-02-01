n=int(input())
for i in range(n):
    m=int(input())
    v=list(map(int,input().split()))
    d=0
    r=0
    e=0
    for j in range(m-1):
        d=d+v[j]
        #print(v[j],v[j+1])
        if v[j]==-1 and v[j+1]==-1:
            r=r+1
        if v[j]==-1:
            e=e+1
    #print(r)
    if v[m-1]==-1:
        e=e+1
    d=d+v[m-1]
    if r!=0:
       # print(d)
        print(d+4)
    elif e!=0:
        print(d)
    else:
        print(d-4)




