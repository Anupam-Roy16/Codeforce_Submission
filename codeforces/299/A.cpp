#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==1)
    {
        cout<<"1"<<endl;
    }
    else{
        int p=0;
        for(i=1;i<n;i++)
        {
            if(a[i]%a[0]!=0)
            {
                p++;
                cout<<"-1"<<endl;
                break;
            }
        }
        if(p==0)
        {
            cout<<a[0]<<endl;
        }
    }
}
