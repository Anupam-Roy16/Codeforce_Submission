#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    char c,d;
    cin>>n;
    cin>>c;
    cin>>m;
    cin>>a;
    cin>>d;
    cin>>b;
    int p,q,r;
    if(n==a)
    {
        p=b+m;
        p/=2;
        if(n>9){
        if(p<10)
        {

            cout<<n<<":0"<<p<<endl;
        }
        else{
            cout<<n<<":"<<p<<endl;
        }
        }
        else{
            if(p<10)
        {

            cout<<"0"<<n<<":0"<<p<<endl;
        }
        else{
            cout<<"0"<<n<<":"<<p<<endl;
        }
        }
    }
    else{
            p=60-m+b;

                p+=((a-n-1)*60);

            p/=2;
            q=p%60;
            p/=60;
            n+=p;
            m+=q;
            r=m%60;
            m/=60;
            n+=m;
            if(n<10)
            {
                if(r<10)
                {
                    cout<<"0"<<n<<":"<<"0"<<r<<endl;
                }
                else{
                     cout<<"0"<<n<<":"<<r<<endl;
                }
            }
            else{
                if(r<10)
                {
                     cout<<n<<":"<<"0"<<r<<endl;
                }
                else{
                     cout<<n<<":"<<r<<endl;
                }
            }

    }
    return 0;

}
