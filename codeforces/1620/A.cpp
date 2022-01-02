#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,i,q,r,s,a,b;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int q=s.size();
        int p=0;
            for(i=0;i<q;i++)
            {
                if(s[i]=='N')
                {
                    p++;

                }
                if(p>1)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(p==0)
            {
                cout<<"YES"<<endl;
                continue;
            }
            if(i==(q))
            {
                cout<<"NO"<<endl;
            }
        }

}
