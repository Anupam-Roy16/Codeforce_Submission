#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,q=0;
    vector<string>v;
    map<string, int> mp,mn;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
        mp[s]++;
        mn[s]=0;
    }
    for(i=0;i<n;i++)
    {
        if(mn[v[i]]==0)
        {
            cout<<"OK"<<endl;
            mn[v[i]]++;
        }
        else{
            cout<<v[i]<<mn[v[i]]<<endl;
            mn[v[i]]++;
        }
    }
    return 0;
}
