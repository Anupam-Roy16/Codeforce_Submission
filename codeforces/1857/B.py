for i in range(int(input())):
    s=input()
    s=list(s)
    if s[0]>'4':
        s = ['0'] * len(s)
        d = ""
        print('1' + d.join(s))
    else:
        q=0
        for j in range(len(s)):
            if s[j]>'4':
                s[j]='0'
                w=j-1
                while w>=0:
                    e=int(s[w])+1
                    if e>=5:
                        s[w]='0'
                    else:
                        d=int(s[w])+1
                        d=str(d)
                        s[w]=d
                        break
                    w-=1
                if w==-1:
                    s=['0']*len(s)
                    d=""
                    print('1'+d.join(s))
                    q+=1
                    break
                else:
                    for t in range(j+1,len(s)):
                        s[t]='0'
                    d=""
                    print(d.join(s))
                    q+=1
                    break
        if q==0:
            d = ""
            print(d.join(s))






