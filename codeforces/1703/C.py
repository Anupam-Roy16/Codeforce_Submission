n=int(input())
for i in range(n):
    m=int(input())
    v=list(map(int,input().split()))
    for j in range(m):
        k,s=input().split()
        k=int(k)
        for l in range(k):
            if(s[l]=='U'):
                v[j]-=1
                if v[j]<0:
                    v[j]=9
            if(s[l]=='D'):
                v[j]+=1
                if(v[j]==10):
                    v[j]=0
        print(v[j],end=" ")
    print("\n")





