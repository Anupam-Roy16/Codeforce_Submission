n=int(input())
for i in range(n):
    m=int(input())
    v=list(map(int,input().split()))
    p=10-len(v)
    p-=1
    p=p*(p+1)
    p/=2
    p=(int)(p)
    print(p*6)

















