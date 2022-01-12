#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a;
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p;
        vector<int>v;
        for(i=0;i<p;i++)
        {
            cin>>q;
            v.push_back(q);
        }
        sort(v.begin(),v.end());
        cout<<v[p-1]-v[0]<<endl;
    }
}


