#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,r,p,q=0,w=0;
    cin>>t>>m>>r;
	int a[t],b[m];
	for(i=0;i<t;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
	    cin>>b[i];
	}
	sort(a,a+t);
	sort(b,b+m);
	if(a[0]>=b[m-1])
    {
        cout<<r<<endl;
        return 0;
    }
	if(r%a[0]==0)
    {
        p=r/a[0];
        cout<<p*b[m-1]<<endl;
    }
    else{
        p=r/a[0];
        cout<<((p*b[m-1])+(r%a[0]))<<endl;

    }

}
