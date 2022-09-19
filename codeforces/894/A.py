n=input()
t=0
q=0
r=0
p=0
e=-1
r=0
z=0
x=0
y=0;c=0;d=0
for i in range(len(n)):
    if n[i]=='Q':
        c+=1
    elif n[i]=='A':
        d+=1
if c==0 or d==0:
    print("0")
    x+=1
if x==0:
    while 1:
        z+=1
        for i in range(e+1,len(n)):
            if t==0 and n[i]=='Q':
                t=1
                f=i
            if q==0 and t==1 and n[i]=='A':
                q=1
                g=i
            if t==1 and q==1:
                if n[i]=='Q':
                    p+=1
                elif (i==len(n)-1):
                    r=1
        if q==0:
            t=0
            e=f
        else:
            q=0
            e=g

        if(z!=1):
            if w==p:
                y+=1
            if(y>1000):
                print(p)
                break

        w=p




