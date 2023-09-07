for i in range(int(input())):
    x,y,z=map(int,input().split())
    x=abs(x-y)
    if x%z!=0:
        x/=z
        x=int(x)
        x/=2
        x=int(x)
        print(x+1)
    else:
        x/=z
        x=int(x)
        if x%2!=0:
            x/=2
            x=int(x)
            print(x+1)
        else:
            x/=2
            x=int(x)
            print(x)









