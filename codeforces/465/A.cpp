#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,p=0,t=100000;
    cin>>n;
    char a[n+1];
    cin>>a;
    if(a[0]=='0')
    {
        cout<<"1"<<endl;
    }
    else{
        for(j=0;j<n;j++)
        {
            if(a[j]=='0')
            {
                break;
            }
        }
        if(j==n)
        {
            cout<<n<<endl;
        }
        else{
            cout<<j+1<<endl;
        }
    }
}
