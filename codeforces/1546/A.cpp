#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    int n,i,w,p,q;
    cin>>n;
    while(n--)
    {
        cin>>p;
        vector<int>v,q,r,s;
        for(i=0;i<p;i++)
        {
            cin>>w;
            v.push_back(w);
        }
        for(i=0;i<p;i++)
        {
            cin>>w;
            q.push_back(w);
        }
        int x=0,y=0,z;

        for(i=0;i<p;i++)
        {
            if(v[i]>q[i])
            {
                z=(v[i]-q[i]);
                x+=z;
                while(z--)
                {
                    r.push_back(i+1);
                }
            }
            else if(v[i]<q[i])
            {
                z=(q[i]-v[i]);
                y+=z;
                while(z--)
                {
                    s.push_back(i+1);
                }
            }
        }
        if(x!=y)
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<x<<endl;
            int t=0;
            while(x--)
            {
                cout<<r[t]<<" "<<s[t]<<endl;
                t++;
            }
        }
    }
}


