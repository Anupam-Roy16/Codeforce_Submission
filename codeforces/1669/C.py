t=int(input())
for i in range(t):
    m=int(input())
    v=list(map(int,input().split()))
    k=0
    for j in range(m):
        if j%2==0:
            if j+2<m:
                if v[j] % 2 != v[j + 2] % 2:
                    k += 1
                    break
        else:
            if j+2<m:
                if v[j] % 2 != v[j + 2] % 2:
                    k += 1
                    break
    if k==0:
        print("YES")
    else:
        print("NO")



















