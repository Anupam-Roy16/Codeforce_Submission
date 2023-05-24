for i in range(int(input())):
    s=input()
    if len(s)==1:
        #print(s[0])
        if  not(s[0]=='Y' or s[0]=='e' or s[0]=='s'):
            print("NO")
        else:
            print("YES")
    else:
        t=0
        for j in range(len(s)-1):
            if s[j]=='Y':
                if s[j+1]!='e':
                    t += 1
                    break
            elif s[j]=='e':
                if s[j + 1] != 's':
                    t += 1
                    break
            elif s[j]=='s':
                if s[j + 1] != 'Y':
                    t += 1
                    break
            else:
                t+=1
                break
        if t==0:
            print("YES")
        else:
            print("NO")



