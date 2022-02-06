#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t,i;
    cin>>t;
    while(t--)
    {
       cin>>a>>b;
       string s,s1;
       cin>>s;
       s1=s;
       reverse(s.begin(),s.end());
       if(b==0)
       {
           cout<<"1"<<endl;
       }
       else{
        if(s1==s)
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
       }
    }
}
