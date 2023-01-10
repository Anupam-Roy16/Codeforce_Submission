t=int(input())
for i in range(t):
    n=int(input())
    v=list(map(int,input().split()))
    v.sort()
    j=0;k=n-1;i=0;p=0
    for l in range(n-1):
        if v[l]!=v[l+1]:
            p+=1
            break
    if p==0:
        print("NO")
    else:
        print("YES")
        while 1:
            if j==k:
                print(v[k], end=" ")
                break
            elif i%2==0:
                print(v[k],end=" ")
                k-=1
            else:
                print(v[j],end=" ")
                j+=1
            i+=1
        print("\n")





