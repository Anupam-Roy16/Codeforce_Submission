for i in range(int(input())):
    s=input()
    s1="codeforces"
    q=0
    for j in range(10):
        if s[j]!=s1[j]:
            q+=1
    print(q)



