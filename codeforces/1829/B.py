for i in range(int(input())):
    p=int(input())
    v=list(map(int,input().split()))
    m=-1
    q=0
    for j in range(p):
        if v[j]==0:
            q+=1
        else:
            if m<q:
                m=q
            q=0
    if m==-1:
        print(q)
    else:
        print(max(q,m))


