n=int(input())
for i in range(n):
    m=int(input())
    v=list(map(int,input().split()))
    p=v.count(2)
    if p%2!=0:
        print("-1")
    else:
        q=0
        for j in range(m):
            if v[j]==2:
                q=q+1
            if q==(int)(p/2):
                print(j+1)
                break