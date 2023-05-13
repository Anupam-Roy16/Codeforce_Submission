for i in range(int(input())):
    x=int(input())
    v=list(map(int,input().split()))
    l=[0]*(x+1)
    for j in range(x):
        l[v[j]]+=1
    q=0
    for j in range(x+1):
        if l[j]==1:
            q+=1
            break
    if q==0:
        print("-1")
    else:
        print(v.index(j)+1)









