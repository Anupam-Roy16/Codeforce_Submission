t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    t=0
    for j in range(n-1):
        if s[j]=='R' and s[j+1]=='L':
            print("0")
            t+=1
            break
        elif s[j]=='L' and s[j+1]=='R':
            print(j+1)
            t+=1
            break
    if t==0:
        print("-1")

















