#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,i,j,t,n,p=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        int p=-1;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]%2==0)
            {
                p=j;
            }
        }
        if(p!=-1)
        {
            cout<<1<<endl<<p+1<<endl;
        }
        else{
                if(n==1)
                {
                    cout<<"-1"<<endl;
                }
                else{
                    cout<<"2"<<endl<<"1 2"<<endl;
                }

        }

    }

}
