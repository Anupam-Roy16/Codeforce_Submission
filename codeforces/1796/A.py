n=int(input())
s=['F','B','F','B','F','F','B','F','F','B','F','B','F','F','B','F','F','B','F','B','F','F','B','F']
for i in range(n):
    m=int(input())
    v=input()
    p=0
    for i in range(len(s)-len(v)+1):
        t=0
        for j in range(len(v)):
            if v[j]!=s[j+i]:
                t=t+1
                break
        if t==0:
            print("YES")
            p=p+1
            break
    if p==0:
        print("NO")
