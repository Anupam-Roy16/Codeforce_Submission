from collections import Counter
n=int(input())
for i in range(n):
    m=int(input())
    s=input()
    d=s
    s=Counter(s)
    x={}
    y=0
    for i in range(97,97+26):
        x[chr(i)]=0
        if s[chr(i)]!=0:
            y=y+1
    t=0
    e=0
    for i in range(m-1):
        if x[d[i]]==0:
            t=t+1
        if s[d[i]]<=1:
            y=y-1
        s[d[i]]=s[d[i]]-1
        x[d[i]]=x[d[i]]+1
        #print("fs",y+t)
        if e<(y+t):
            e=t+y
    print(e)


