n=int(input())
for i in range(n):
    p,q=map(int,input().split())
    v=list(map(int,input().split()))
    t=0
    for j in range(q):
        k=j
        m=-1
        while 1:
            if k>=p:
                break
            if v[k]>m:
                m=v[k]
            k+=q
        t+=m
    print(t)








