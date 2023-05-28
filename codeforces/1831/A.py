for i in range(int(input())):
    n=int(input())
    v=list(map(int,input().split()))
    for j in range(n):
        print(n+1-v[j],end=" ")
    print("\n")