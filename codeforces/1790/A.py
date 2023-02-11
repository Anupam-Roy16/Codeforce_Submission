n=int(input())
for i in range(n):
    m=input()
    p=0
    d="314159265358979323846264338327"
    for j in range(len(m)):
        if m[j]==d[j]:
            p=p+1
        else:
            break
    print(p)

