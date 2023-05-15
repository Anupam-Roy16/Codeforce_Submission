for i in range(int(input())):
    x=int(input())
    v=list(map(int,input().split()))
    v1=[0]*(x+1)
    for j in range(x):
        v1[v[j]]+=1
    del_count=0
    for j in range(x-1):
        if v1[v[j]]!=1:
            del_count=j+1
            v1[v[j]]-=1
    print(del_count)








