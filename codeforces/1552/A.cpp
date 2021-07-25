#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int m,n,i;
    cin>>n;
    while(n--)
    {
        string t,s;
        int p=0;
        cin>>m;
        cin>>s;
        t=s;
        sort(s.begin(),s.end());
        for(i=0;i<m;i++)
        {
            if(t[i]!=s[i])
            {
                p++;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}
