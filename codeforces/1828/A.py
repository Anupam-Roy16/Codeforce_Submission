for i in range(int(input())):
    x=int(input())
    p=x
    x*=(x+1)
    x/=2
    x=int(x)
    q=x
    if x%p==0:
        for j in range(p):
            print(j+1,end=" ")
        print("\n")
    else:
        x/=p
        x=int(x)
        x+=1
        x*=p
        x-=q
        for j in range(p):
            if j==0:
                print(x+1,end=" ")
            else:
                print(j+1,end=" ")
        print("\n")







