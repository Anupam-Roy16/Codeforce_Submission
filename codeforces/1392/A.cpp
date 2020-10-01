#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>q;
        int p=0,a[q];

        for(j=0;j<q;j++)
        {
            cin>>a[j];
            if(j>=1)
            {
                if(a[j]!=(a[j-1]))
            {
                p++;
            }
            }
        }
        if(p==0)
        {
            cout<<q<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
}
