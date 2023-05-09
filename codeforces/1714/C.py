for i in range(int(input())):
    x=int(input())
    l=[]
    p=0
    for i in range(9,0,-1):
        if i+p<=x:
            l.append(i)
            p+=i
    for i in range(len(l)-1,-1,-1):
        print(l[i],end="")
    print("\n")



