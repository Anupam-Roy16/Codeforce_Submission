#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int n,p,q,r,s,i;
    cin>>n;
    while(n--)
    {
       string s;
       cin>>s;
       map<char,int>m;
       int q=0;
       for(i=0;i<s.size();i++)
       {
           m[s[i]]++;
       }
       for(auto u:m)
       {
           if(u.second>2)
           {
               q+=2;
           }
           else{
            q+=u.second;
           }
       }
       cout<<q/2<<endl;
    }

}
