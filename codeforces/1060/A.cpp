#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q,i,a,c,p=0;
    cin>>a;
    q=a;
    char b[a];
    cin>>b;
    for(i=0;i<a;i++)
    {
        if(b[i]=='8')
        {
            p++;
        }
    }
    if(p==0)
    {
        cout<<"0"<<endl;
    }
    else{
        i=1;
        int t=0;
        while(i<=p)
        {
            c=10*i;
            a-=i;
            int r=a/c;
            if(r!=0)
            {
                i++;
            }
            else{
                    t++;
                break;
            }
            a=q;
        }
        if(t!=0)
        {
            cout<<i-1<<endl;
        }
        else{
            cout<<p<<endl;
        }
    }
    return 0;
}
