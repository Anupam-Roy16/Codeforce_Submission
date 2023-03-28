n=int(input())
for j in range(n):
    v=int(input())
    a=list(map(int,input().split()))
    p=0
    for i in range(v):
        if a[i]%2==0:
            p+=1
    print(min(p,v-p))

