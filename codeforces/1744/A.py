n=int(input())
for i in range(n):
    m=int(input())
    v=list(map(int,input().split()))
    s=input()
    for j in range(len(v)):
        p=0
        for k in range(j+1,len(v)):
            if v[j]==v[k] and s[j]!=s[k]:
                print("NO")
                p+=1
                break
        if p==1:
            break
    if p==0:
        print("YES")








