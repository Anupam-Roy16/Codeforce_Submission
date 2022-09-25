n=int(input())
for i in range(n):
    x,y=map(int,input().split())
    v=list(map(int,input().split()))
    v1=[0]*101
    for j in range(x):
        v1[v[j]]+=1
    r=0
    for j in range(101):
        if (v1[j]<y):
            r+=v1[j]
        else:
            r+=y
    print(r)
