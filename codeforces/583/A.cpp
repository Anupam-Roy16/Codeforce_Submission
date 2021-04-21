#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,p=0,q=0;
    cin>>n;
    vector<int> v,b,z;
    map<int,int> r,w;
    for(i=0;i<n*n;i++)
    {
        cin>>p>>q;
        v.push_back(p);
        b.push_back(q);
        if((r[p]==0)&&(w[q]==0))
        {
            z.push_back(i+1);
            r[p]++;
            w[q]++;
        }

    }
    int t=z.size();
    for(i=0;i<t;i++)
    {
        cout<<z[i];
        if(i!=t-1)
        {
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
}

