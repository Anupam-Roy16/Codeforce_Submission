#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p=0,t,k,f;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>b;
    for(i=0;i<n;i++)
    {



            t=0;
            for(j=0;j<b.size();j++)
            {
               // cout<<b[j]<<" ";
                if(b[j]==a[i])
                {
                    t++;
                    break;
                }
            }

            if(t==0)
            {
               if(b.size()==k)
        {
            b.erase(b.begin());
        }
                b.push_back(a[i]);
            }

    }
    cout<<b.size()<<endl;
    for(j=b.size()-1;j>=0;j--)
    {
        cout<<b[j];
        if(j!=0)
        {
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
   // for ( auto u : a ) cout << u << " ";
}
