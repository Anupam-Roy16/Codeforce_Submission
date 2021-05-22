#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long w,m=100000000000000000000,n,p,q;
    cin>>n>>p;
    vector<unsigned long long>v;
    int i,y;
    for(i=0;i<p;i++)
    {
        cin>>q;
        v.push_back(q);
        w=n%q;
        if(m>w)
        {
            m=w;
            y=i;
        }
    }
    cout<<y+1<<" "<<n/v[y]<<endl;
	return 0;
}
