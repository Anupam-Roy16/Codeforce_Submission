#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        a=a%2;
        b=b%2;
        c=c%2;
        if((a==0)&&(b==0)&&(c==0))
        {
            cout<<"0"<<endl;
        }
        else if((a==0)&&(b==0)&&(c==1))
        {
            cout<<"1"<<endl;
        }
        else if((a==0)&&(b==1)&&(c==0))
        {
            cout<<"0"<<endl;
        }
        else if((a==0)&&(b==1)&&(c==1))
        {
            cout<<"1"<<endl;
        }
        else if((a==1)&&(b==0)&&(c==0))
        {
            cout<<"1"<<endl;
        }
        else if((a==1)&&(b==0)&&(c==1))
        {
            cout<<"0"<<endl;
        }
        else if((a==1)&&(b==1)&&(c==0))
        {
            cout<<"1"<<endl;
        }
        else if((a==1)&&(b==1)&&(c==1))
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}
