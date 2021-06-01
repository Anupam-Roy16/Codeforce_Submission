#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,t,i,n,k,p=0,q=0;
    cin>>n>>t;
    vector<pair<int,int>> v;
	for(i=0;i<n;i++)
	{
	    cin>>m>>k;
	    v.push_back ( { m, k } );
	}

	sort ( v.begin(), v.end() );

	for(i=n-1;i>=0;i--)
	{
	    if(i==n-1)
        {
            p+=abs(t-v[i].first);

        }
        else{
            p+=abs(v[i+1].first-v[i].first);
        }
        if(p<v[i].second)
        {
            p+=((v[i].second)-p);
        }
        //cout<<p<<endl;
	}
	if(v[0].first!=0)
    {
        p+=(v[0].first-0);
    }
    cout<<p<<endl;
   return 0;
}
