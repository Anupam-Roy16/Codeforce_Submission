x=int(input())
for i in range(x):
    y=int(input())
    v=list(map(int,input().split()))
    d=v.count(1)
    if d%2==0:
        print((int)(d/2)+(y-d))
    else:
        print((int)(d / 2)+1+(y - d))
