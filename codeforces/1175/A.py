for i in range(int(input())):
    n,m=map(int,input().split())
    p=0
    while 1:
        if n%m==0:
            n//=m
            #n=it(n)
            p+=1
        else:
            r=(n%m)
            n-=r
            p+=r
        if n==0:
            break
    print(p)