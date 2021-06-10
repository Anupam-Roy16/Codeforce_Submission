#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
	fastIO();
	int t,i,q,r,m,x;
	cin>>t;
	while(t--)
    {
        cin>>m;
        int w=m;
        vector<int>p;
        while(m--)
        {
            cin>>x;
            p.push_back(x);
        }

         q=min_element( p.begin(), p.end() ) - p.begin();
         r=max_element( p.begin(), p.end() ) - p.begin();

       // cout<<q<<" "<<r<<endl;
        int y=min(q,r);
        int z=max(q,r);
        int d=w-(y+1);
        d++;
        y++;
        y+=(w-z);
        z++;
        int f=min(y,z);
        int g=min(d,f);
        cout<<g<<endl;
    }
    return 0;
}


