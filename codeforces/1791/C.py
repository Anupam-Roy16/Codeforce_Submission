n=int(input())
for i in range(n):
    m=int(input())
    s=input()
    if len(s)==1:
        print("1")
    else:
        k=len(s)/2
        k=(int)(k)
        p=0
        for i in range(k):
            if s[i]!=s[len(s)-1-i]:
                p=p+1
            else:
                break
        p=p*2
        print(len(s)-p)
