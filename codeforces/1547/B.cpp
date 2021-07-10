#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,mi,mx,j;
   cin>>n;
   string s;
   while(n--)
   {
       cin>>s;
       int z=0;
       for(i=0;i<s.size();i++)
       {
           if(s[i]=='a')
           {
               z++;
               break;
           }
       }
       if(z==0)
       {
           cout<<"NO"<<endl;
       }
       else{
            int y=0;
            mi=i-1;
            mx=i+1;
            char d='a'+1;
        for(j=0;j<s.size()-1;j++)
        {
            if((s[mi]==d)&&(mi>=0))
            {
                mi--;
                d++;
            }
            else if((s[mx]==d)&&(mx<s.size()))
            {
                mx++;
                d++;
            }
            else{
                y++;
                    cout<<"NO"<<endl;
                break;
            }
        }
       if(y==0)
        {
            cout<<"YES"<<endl;
        }
       }
   }
}
