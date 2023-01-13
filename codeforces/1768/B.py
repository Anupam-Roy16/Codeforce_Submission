t=int(input())
for i in range(t):
    m,n=map(int,input().split())
    v=list(map(int,input().split()))
    k=1;p=0
    for j in range(m):
        if v[j]==k:
            p+=1
            k+=1
    m-=p
    if m%n==0:
        m/=n
        m=(int)(m)
    else:
        m /= n
        m = (int)(m)
        m+=1
    print(m)

















