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
	int t=0,r,n,i,p,j,y;
	cin>>n>>p;
	r=max(n,p);
	y=min(n,p);
	cout<<r+(y-1)<<endl;
	for(i=1;i<=n;i++)
    {
        if(i==1){
        for(j=1;j<=p;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
        }
        else{
            cout<<i<<" 1"<<endl;
        }
    }
}
