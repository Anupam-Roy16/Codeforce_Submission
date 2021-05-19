#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q=0,i,B=0,u=0,l=0,b=0,a=0,t=0,r=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='B')
        {
            B++;
        }
        else if(s[i]=='u')
        {
            u++;
        }
        else if(s[i]=='l')
        {
            l++;
        }
        else if(s[i]=='b')
        {
            b++;
        }
        else if(s[i]=='a')
        {
            a++;
        }
        else if(s[i]=='s')
        {
            t++;
        }
        else if(s[i]=='r')
        {
            r++;
        }
    }
    u/=2;a/=2;
    int z[7];
    z[0]=B;
    z[1]=u;
    z[2]=l;
    z[3]=b;
    z[4]=a;
    z[5]=t;
    z[6]=r;
    sort(z,z+7);
    cout<<z[0]<<endl;
}
