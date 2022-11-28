x=int(input())
for i in range(x):
    x,y,z=map(int,input().split())
    if x+y==z:
        print("YES")
    elif x+z==y:
        print("YES")
    elif y+z==x:
        print("YES")
    else:
        print("NO")
        
















