#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int p;
    cin>>p;
    while(p--)
    {
        cin>>a>>b;
        map<char,int> m;
        int r=0,q=0;
        while(q<26)
        {
            m[a[q]]=q+1;
            q++;
        }
        for(int i=1;i<b.size();i++)
        {
            r+=abs(m[b[i]]-m[b[i-1]]);
        }
        cout<<r<<endl;
    }
    return 0;
}
