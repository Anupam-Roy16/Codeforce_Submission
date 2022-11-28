x=int(input())
from collections import defaultdict
for i in range(x):
    y = int(input())
    v=list(map(int,input().split()))
    d = defaultdict(int)

    p=0
    for j in range(len(v)):
        d[v[j]]+=1
        if(d[v[j]]>1):
            print("NO")
            p+=1
            break

    if(p==0):
        print("YES")





















