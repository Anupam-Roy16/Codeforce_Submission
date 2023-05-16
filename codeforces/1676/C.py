for i in range(int(input())):
    n_s,length=map(int,input().split())
    v=[]
    for j in range(n_s):
        s=input()
        v.append(s)
    min=10000000
    for j in range(n_s-1):
        for k in range(j+1,n_s):
            w=0
            for p in range(length):
                w+=abs(ord(v[j][p])-ord(v[k][p]))
            if w<min:
                min=w
    print(min)













