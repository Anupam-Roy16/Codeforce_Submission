#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q=0,r,s,i;
    cin>>n;
    int a[n],b[101]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(i=0;i<101;i++)
    {

        if(b[i]!=0)
        {
            if(q==0)
            {
                s=i;
            }
            else{
                r=i;
            }
            q++;
        }

    }
    if(q==2)
    {
        if(b[r]==n/2)
        {
            cout<<"YES"<<endl;
            cout<<s<<" "<<r<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    else{
        cout<<"NO"<<endl;
    }
}
