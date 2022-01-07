#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int l=s.size();
        if(l%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else{
                int a=0,b=0;
            for(i=0;i<l;i++)
            {
                if(s[i]=='A')
                {
                    a++;
                }
                else if(s[i]=='C')
                {
                    b++;
                }
            }
            a+=b;
            if(a==(l-a))
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
