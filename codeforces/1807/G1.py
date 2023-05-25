for i in range(int(input())):
    p=int(input())
    v=list(map(int,input().split()))
    v.sort()
    if v[0]!=1:
        print("NO")
    else:
        q=1
        w=0
        for j in range(p):
            if v[j]<=q:
                if j>=1:
                    q+=v[j]
            else:
                print("NO")
                w=1
                break
        if w==0:
            print("YES")







