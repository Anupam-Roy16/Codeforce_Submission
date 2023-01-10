t=int(input())
for i in range(t):
    s=input()
    d=""
    if s[1]=='b':
        for j in range(1,len(s)-1):
            d+=s[j]
        print(s[0],d,s[len(s)-1])
    else:
        r="";t="";p=0
        for j in range(len(s)):
            if j!=0 and s[j]=='a' and p==0:
                p+=1
            elif p==0:
                r+=s[j]
            else:
                t+=s[j]
        print(r,'a',t)










