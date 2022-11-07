n=int(input())
for i in range(n):
    m=int(input())
    v=list(map(int,input().split()))
    v.sort()
    q=0
    for j in range(m-1):
        if(v[j]%2==0):
            w=v[j]
            e=0
            while 1:
                w/=2
                e+=1
                if w%2!=0:
                    v[j]=w
                    break
            q+=e
    if q==0 and v[m-1]%2==0:
        e = 0
        f=0
        w = v[m - 1]
        for j in range(m):
            f += v[j]
        while 1:
            w /= 2
            e += 1
            if w % 2 != 0:
                v[m - 1] = w
                break
        t=pow(2,e)
        v[m-2]*=t
        d=0
        for j in range(m):
            d += v[j]
        print(max((int)(d),(int)(f)))
        continue
    elif q==0:
        d=0
        for j in range(m):
            d += v[j]
        print(d)
        continue

    s=pow(2,q)
    v[m-1]*=s
    v.sort()
    f=0

    for j in range(m):
        f+=v[j]
    e = 0
    w=v[m-1]
    while 1:
        w /= 2
        e += 1
        if w % 2 != 0:
            v[m-1] = w
            break
    s=pow(2,e)

    v[m-2]*=s

    r=0
    for j in range(m):
        r+=v[j]
    print(max((int)(r),(int)(f)))








