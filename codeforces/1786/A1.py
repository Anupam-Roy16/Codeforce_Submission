t=int(input())
for i in range(t):
    n=int(input())
    p=0
    j=0
    k=0
    a=0
    b=0
    while True:
        if k==0:
            a=a+j+1
            j=j+1
        else:
            r=j+1+j+2+a+b
            if r>n:
                n = n - (a + b)
                if k%2==0:
                    a=a+n
                else:
                    b=b+n
                break
            if k%2==0:
                a=a+j+1+j+2
            else:
                b=b+j+1+j+2
            #j=j+1
            j=j+2
        k=k+1
    print(a,b)


