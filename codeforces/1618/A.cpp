#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,i,n;
    cin>>t;
    while(t--)
    {
        int q;
        vector<long long int>v;
        for(i=0;i<7;i++)
        {
            cin>>q;
            v.push_back(q);
        }
        int j,k,x=0;

        for(i=0;i<6;i++)
        {
            for(j=i+1;j<6;j++)
            {
                for(k=j+1;k<6;k++)
                {
                    if((x==0)&&(v[i]+v[j]+v[k])==v[6])
                    {
                        x++;
                        cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;

                    }
                }
            }
        }
    }
    return 0;
}
