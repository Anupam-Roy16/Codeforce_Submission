n=int(input())
for j in range(n):
    a,b,c,x,y=map(int,input().split())
    if a+c>=x:
        if a<x:
            c-=(x-a)
    else:
        print("NO")
        continue
    if b+c>=y:
        print("YES")
    else:
        print("NO")

