#include<bits/stdc++.h>
using namespace std;
int main()
{


	int n,t,i,j,p=0,q=0,w=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n>>j;
	    if(n==0)
        {
            p++;
        }
        if(j==0)
        {
            q++;
        }
	}
	n=(t-p);
	j=t-q;
	if(n>p)
    {
        w+=p;
    }
    else{
        w+=n;
    }
    if(j<q)
    {
        w+=j;
    }
    else{
        w+=q;
    }
    cout<<w<<endl;
}
