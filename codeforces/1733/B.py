n=int(input())
for i in range(n):
    p,q,r=map(int,input().split())
    if (q!=0 and r!=0) or(q==0 and r==0):
        print("-1")
    else:
        if q!=0:
            x=q
        else:
            x=r
        if (p-1)%x!=0:
            print("-1")
        else:
            y=(p-1)/x
            v=[]
            for j in range((int)(y)):
                if j==0:
                    e=1
                elif j==1:
                    e+=x+1
                else:
                    e+=x
                for i in range(x):
                    v.append(e)
            for j in range(len(v)):
                print(v[j],end=" ")
            print("\n")












