for i in range(int(input())):
    x=int(input())
    v=list(map(int,input().split()))
    l=-1
    for j in range(x-1):
        if l<v[j]*v[j+1]:
            l=v[j]*v[j+1]
    print(l)









