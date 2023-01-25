n=int(input())
for i in range(n):
    m=int(input())
    v=list(map(int,input().split()))
    v1=[]
    v2=[]
    for j in range(m):
        if v[j]%2!=0:
            v1.append(j+1)
        else:
            v2.append(j+1)
    if len(v1)>=3:
        print("YES")
        print(v1[0],v1[1],v1[2])
    elif len(v1)>=1 and len(v2)>=2:
        print("YES")
        print(v1[0],v2[0],v2[1])
    else:
        print("NO")