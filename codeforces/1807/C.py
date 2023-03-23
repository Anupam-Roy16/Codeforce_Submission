n=int(input())
for j in range(n):
    m = int(input())
    s=input()
    d={}
    a=ord('a')
    for i in range(a,a+26):
        d[i]=-1
    q=0
   
    for i in range(m):
        if i%2!=0:
            if d[ord(s[i])]!=-1:
                if d[ord(s[i])]!=1:
                    q+=1
                    break
            else:
                d[ord(s[i])]=1
        else:
            if d[ord(s[i])]!=-1:
                if d[ord(s[i])]!=0:
                    q+=1
                    break
            else:
                d[ord(s[i])]=0

    if q==0:
        print("YES")
    else:
        print("NO")