#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,i,n;
    cin>>n;
    while(n--)
    {
        cin>>q;
        vector<int>v;
        int w=0;
        for(i=0;i<q;i++)
        {
            cin>>p;
            v.push_back(p);
            w+=p;
        }
        if(w%q==0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
}
