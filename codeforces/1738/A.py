n=int(input())
for i in range(n):
    m=int(input())
    v1=list(map(int,input().split()))
    v2=list(map(int,input().split()))
    v3=[]
    v4=[]
    p=0
    q=0
    for j in range(m):
        if v1[j]==1:
            v3.append(v2[j])
            p+=1
            q+=v2[j]
        else:
            v4.append(v2[j])
            q+=v2[j]
    if p==0 or p==m:
        print(q)
    else:
        if p==(m-p):
            v3.sort()
            v4.sort()
            q *= 2
            if(v3[0]>v4[0]):
                print(q-v4[0])
            else:
                print(q-v3[0])
                
        elif p>(m-p):
            v3.sort()
            b=0
            for j in range((2*p)-m):
                b+=v3[j]
            for j in range(((2*p)-m),p):
                b+=(2*v3[j])
            for j in range(m-p):
                b+=(2*v4[j])
            print(b)
        else:
            v4.sort()
            b = 0
            for j in range(m-(2 * p)):
                b += v4[j]
            for j in range((m-(2 * p)), m-p):
                b += (2 * v4[j])
            for j in range(p):
                b += (2 * v3[j])
            print(b)








