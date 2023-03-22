n=int(input())
for i in range(n):
    m = int(input())
    x=list(map(int,input().split()))
    p=0
    q=0
    for i in range(m):
        if x[i]%2==0:
            p+=x[i]
        else:
            q+=x[i]
    if p>q:
        print("YES")
    else:
        print("NO")