#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,m,k;
	set<int>p;
	cin>>m;
	for(i=0;i<m;i++)
    {
        cin>>j;
        p.insert(j);
    }
    if(p.size()==1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<*(++p.begin())<<endl;
    }
}
