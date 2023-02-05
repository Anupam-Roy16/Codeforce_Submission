t=int(input())
for i in range(t):
    n=int(input())
    p=0
    j=0
    k=0
    a=0
    b=0
    aw=0
    ab=0
    bw=0
    bb=0
    while True:
        if k==0:
            a=a+j+1
            j=j+1
            aw=1
        else:
            r=j+1+j+2+a+b
            if r>n:
                n = n - (a + b)
                if k%2==0:
                    if n%2==0:
                        aw=aw+(int)(n/2)
                        ab=ab+(int)(n/2)
                    else:
                        aw = aw + (int)(n / 2)+1
                        ab = ab + (int)(n / 2)

                else:
                    if n % 2 == 0:
                        bw = bw + (int)(n / 2)
                        bb = bb + (int)(n / 2)
                    else:
                        bw = bw + (int)(n / 2)
                        bb = bb + (int)(n / 2)+1
                break
            if k%2==0:
                a=a+j+1+j+2
                aw=aw+(int)((j+1)/2)+(int)((j+2)/2)+1
                ab=ab+(int)((j+1)/2)+(int)((j+2)/2)
            else:
                b=b+j+1+j+2
                bw = bw + (int)((j + 1) / 2) + (int)((j + 2) / 2)
                bb = bb + (int)((j + 1) / 2) + (int)((j + 2) / 2)+1
            #j=j+1
            j=j+2
        k=k+1
    print(aw,ab,bw,bb)


