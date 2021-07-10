#include <bits/stdc++.h>
using namespace std;
bool check(int x,int y)
{
    int w;
    if((x>=1)&&(x<=9))
    {
        x*=10;
    }
    else if(x>9)
    {
        w=x%10;
        x/=10;
        w*=10;
        w+=x;
        x=w;
    }
    if(x==y)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int p,n,m,i=0;
    char c;
    cin>>n;
    cin>>c;
    cin>>m;
   // cout<<n<<c<<m;
    while(1)
    {
        p=check(n,m);
        if(p==1)
        {
            cout<<i<<endl;
            break;
        }
        else{
                if(m==59)
                {
                    m=0;
                    if(n==23)
                    {
                        n=0;
                    }
                    else{
                        n++;
                    }
                }
                else{
                    m++;
                }
            i++;
        }
    }
}
