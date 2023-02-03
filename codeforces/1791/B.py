n=int(input())
for i in range(n):
    m=int(input())
    s=input()
    x=0
    y=0
    p=0
    for j in range(len(s)):
        if s[j]=='R':
            x=x+1
        elif s[j]=='D':
            y=y-1
        elif s[j]=='L':
            x=x-1
        else:
            y=y+1
        if x == 1 and y == 1:
            p=p+1
            break
    if p==1:
        print("YES")
    else:
        print("NO")