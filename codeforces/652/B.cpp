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
	int t=0,r,n,i,p;
	cin>>n;
	vector<int>q;
    r=n;
	for(i=0;i<n;i++)
    {
        cin>>p;
        q.push_back(p);
    }
	sort(q.begin(),q.end());
	int y=0,z=n-1;
	for(i=0;i<r;i++)
    {
        if(t%2==0)
        {
            cout<<q[y];
            t++;
            y++;
        }
        else{
            cout<<q[z];
            z--;
            t++;
        }
        if(i==(r-1))
        {
            cout<<endl;
        }
        else{
            cout<<" ";
        }
    }
}
