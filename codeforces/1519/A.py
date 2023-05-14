for i in range(int(input())):
    x,y,z=map(int,input().split())
    s=min(x,y)
    r=max(x,y)
    q=0
    if r%s==0:
        r/=s
        if r-1<=z:
            print("YES")
            q+=1
    else:
        r/=s
        w=int(r)+1
        if w-1<=z:
            print("YES")
            q+=1
    if q==0:
        print("NO")
    
        
        
        









