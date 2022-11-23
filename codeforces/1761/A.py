x=int(input())
for i in range(x):
    p,q,r=map(int,input().split())
    if p==q and q==r:
        print("Yes")
    elif (r+q)<=(p-2):
        print("Yes")
    else:
        print("No")















