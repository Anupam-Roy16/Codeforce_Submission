#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,i,k;
    cin>>n;
    while(n--)
    {
        cin>>m;
        int a[m];
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        if(m==1) {
                cout<<"0"<<endl;
        continue;
        }
        int p=0;
        int t=0;
        for(i=1;i<m;i++)
        {
            if(a[i]%2==a[i-1]%2)
            {
                p++;
            }
            else{
                    t+=(p);
                    p=0;
 
            }
        }
        cout<<t+p<<endl;
    }
}