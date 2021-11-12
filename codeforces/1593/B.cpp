#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i;
    cin>>t;
    long long e,d,a,b,c,f;
    while(t--)
    {
        cin>>a;
        f=a;
        int r=0,p=0,q=0;

        while(1)
        {
             c=a%10;
            if(c==0)
            {
                a/=10;
                while(1)
                {
                    d=a%10;
                    if((d==0)||(d==5))
                    {
                        p++;
                        break;
                    }
                    else{
                        a/=10;
                        r++;
                    }
                }
            }
            else{
               a/=10;
               r++;
               if(r==20)
               {
                   break;
               }
            }
            if(p==1)
            {
                break;
            }
        }
        p=0;

        while(1)
        {
            c=f%10;
        if(c==5)
        {
            f/=10;
            while(1)
            {
                d=f%10;
                if((d==2)||(d==7))
                {
                    p++;
                    break;
                }
                else{
                    f/=10;
                    q++;
                    if(q==20)
                    {
                        p++;
                        break;
                    }
                }
            }
        }

        else{
            f/=10;
            q++;
            if(q==20)
                    {
                        p++;
                        break;
                    }
        }
        if(p==1)
        {
            break;
        }
        }

        cout<<min(r,q)<<endl;

    }
    return 0;
}
