#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    cin>>a;
    int l=strlen(a),i;
    for(i=0;i<l-2;i++)
    {
        if((a[i]=='B')&&(a[i+1]=='A')&&(a[i+2]=='C'))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if((a[i]=='B')&&(a[i+1]=='C')&&(a[i+2]=='A'))
        {
            cout<<"YES"<<endl;
            return 0;
        }
         else if((a[i]=='A')&&(a[i+1]=='B')&&(a[i+2]=='C'))
         {
             cout<<"YES"<<endl;
            return 0;
         }
          else if((a[i]=='A')&&(a[i+1]=='C')&&(a[i+2]=='B'))
          {
              cout<<"YES"<<endl;
            return 0;
          }
           else if((a[i]=='C')&&(a[i+1]=='B')&&(a[i+2]=='A'))
           {
               cout<<"YES"<<endl;
            return 0;
           }
          else if((a[i]=='C')&&(a[i+1]=='A')&&(a[i+2]=='B'))
          {
              cout<<"YES"<<endl;
            return 0;
          }
    }
    cout<<"NO"<<endl;
            return 0;
}
