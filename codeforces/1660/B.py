for i in range(int(input())):
    n=int(input())
    v=list(map(int,input().split()))
    v.sort()
    if n==1:
        if v[0]==1:
            print("YES")
        else:
            print("NO")
        continue
    if v[n-1]-v[n-2]>1:
        print("NO")
    else:
        print("YES")










