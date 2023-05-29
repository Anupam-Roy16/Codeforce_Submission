for i in range(int(input())):
    n=int(input())
    v=list(map(int,input().split()))
    q=w=0
    for j in range(n):
        if v[j]==0:
            q+=1
        elif v[j]!=0:
            w+=1
    if  w==n:
        print("1")
    elif q==n:
        print("0")
    else:
        w=0
        for j in range(n-1):
            if v[j]==0 and v[j+1]!=0:
                w+=1
        if v[0]!=0:
            w+=1
        if w>=2:
            print("2")
        else:
            print("1")