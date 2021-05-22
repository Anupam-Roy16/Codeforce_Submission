#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long w,n,p,q;
    cin>>n>>p;
    long long i,m;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    w=n;
    n*=(n+1);
    n/=2;
    int t=0;
    for(i=w;i>=2;i--)
    {
        if(n==p)
        {
            t++;
            cout<<v[i-1]<<endl;
            break;
        }
        else if(n<p){
                t++;
                cout<<v[p-n-1]<<endl;
            break;
        }
        else{
            n-=i;
        }
    }
    if(t==0)
    {
        cout<<v[0]<<endl;
    }
	return 0;
}
