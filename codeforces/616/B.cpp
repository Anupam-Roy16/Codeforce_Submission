#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m,i,l,j,p,q;
    cin>>n>>m;
    vector<vector<int>> vec;
    vector<int> w;
    for(j=0;j<n;j++)
    {
        vector<int> v;
        for(i=0;i<m;i++)
        {
            cin>>p;
            v.push_back(p);
        }
        q=*min_element(v.begin(),v.end());
        w.push_back(q);
        vec.push_back(v);
    }
     cout<<*max_element(w.begin(),w.end())<<endl;
    return 0;
}
