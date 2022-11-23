x=int(input())
for i in range(x):
    l=int(input())
    v=list(map(int,input().split()))
    v1=[]
    for j in range(l):
        v1.append(v[j])

    v.sort()
    c=v[l-1]
    m=v[l-2]
    for j in range(l):

        if c!=v1[j]:
            print(v1[j]-c,end=" ")
        else:
            print(c-m,end=" ")
    print("\n")














