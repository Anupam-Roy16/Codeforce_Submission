#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,q=0;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v,g;
    for(i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }
    for(i=0;i<n-1;i++)
    {
        if((s[i]=='R')&&(s[i+1]=='L'))
        {
            g.push_back(v[i+1]-v[i]);
            q++;
        }
    }
    if(q==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    sort(g.begin(),g.end());
    cout<<g[0]/2<<endl;
	return 0;
}
