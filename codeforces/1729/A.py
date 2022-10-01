n=int(input())
for i in range(n):
    x,y,z=map(int,input().split())
    x=abs(x-1)
    y=abs(z-y)
    y+=(abs(z-1))
    if x<y:
        print("1")
    elif x>y:
        print("2")
    else:
        print("3")















