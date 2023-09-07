for i in range(int(input())):
    w=int(input())
    v=list(map(int,input().split()))
    e=0
    for j in range(w):
        e+=v[j]
    if e%2!=0:
        print("NO")
    else:
        print("YES")







