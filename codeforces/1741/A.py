n=int(input())
for i in range(n):
    s1,s2=input().split()
    l=len(s1)
    m=len(s2)
    if s1[l-1]=='L' and s2[m-1]=='S':
        print(">")
    elif s1[l-1]=='S' and s2[m-1]=='L':
        print("<")
    elif s1[l-1]=='M' and s2[m-1]=='L':
        print("<")
    elif s1[l-1]=='M' and s2[m-1]=='S':
        print(">")
    elif s1[l-1]=='L' and s2[m-1]=='M':
        print(">")
    elif s1[l - 1] == 'S' and s2[m - 1] == 'M':
        print("<")
    elif s1[l - 1] == 'M' and s2[m - 1] == 'M':
        print("=")
    elif s1[l - 1] == 'L' and s2[m - 1] == 'L':
        if(l>m):
            print(">")
        elif(l<m):
            print("<")
        else:
            print("=")
    elif s1[l - 1] == 'S' and s2[m - 1] == 'S':
        if(l>m):
            print("<")
        elif(l<m):
            print(">")
        else:
            print("=")
