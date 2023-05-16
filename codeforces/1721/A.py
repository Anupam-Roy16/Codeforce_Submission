for i in range(int(input())):
    s=input()
    s=list(s)
    s1=input()
    s1=list(s1)
    v=[]
    v.append(s[0])
    v.append(s[1])
    v.append(s1[0])
    v.append(s1[1])
    v.sort()
    t=1
    for j in range(1,4):
        if v[j]!=v[j-1]:
            t+=1
    if t==4:
        print("3")
    elif t==3:
        print("2")
    elif t==2:
        print("1")
    else:
        print("0")
        










