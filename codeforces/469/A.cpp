#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,m,k;
	cin>>n;
	set<int>p;
	cin>>m;
	for(i=0;i<m;i++)
    {
        cin>>j;
        p.insert(j);
    }
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>j;
        p.insert(j);
    }
    if(p.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}
