#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int p,q,r,s,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>p>>q>>r>>s;
        string z;
        vector<string>v;
        for(i=0;i<p;i++)
        {
            cin>>z;
            v.push_back(z);
        }
        int w=0;
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                if(v[i][j]=='B')
                {
                    w++;
                }
            }
        }
        if(w==0)
        {
            cout<<"-1"<<endl;
        }
        else if(v[r-1][s-1]=='B'){
            cout<<"0"<<endl;
        }
        else{
            int e=0,h=0;
            for(i=0;i<q;i++)
            {
                if(v[r-1][i]=='B')
                {
                    e++;
                }
            }
            for(i=0;i<p;i++)
            {
                if(v[i][s-1]=='B')
                {
                    h++;
                }
            }

            if((e!=0)||(h!=0))
            {
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
    }
    return 0;
}





