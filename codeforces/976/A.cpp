#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q,t,i,c,j=-1,p=0;
    cin>>t;
    char a[t+1];
    cin>>a;
    for(i=0;i<t;i++)
    {
       if(a[i]=='0')
       {
           p++;
       }
    }
    if(p==t)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<"1";
        i=0;
        while(i<p)
        {
            cout<<"0";
            i++;
        }
        cout<<endl;
    }
    return 0;
}
