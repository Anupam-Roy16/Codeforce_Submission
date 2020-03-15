#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j;
        cin>>n;
        char a[n+1];
        cin>>a;
        int l=strlen(a);
        if(l<11){cout<<"NO"<<endl;}
        else{
                int p=0;
        for(j=0;j<l;j++)
        {
         if(a[j]=='8')
         {
             p++;
             break;
         }
        }
        if(p==0)
        {
           cout<<"NO"<<endl;
        }
        else{
            if((l-j)>10)
            {
                 cout<<"YES"<<endl;
            }
            else{
                 cout<<"NO"<<endl;
            }
        }
        }
    }
    return 0;
}
