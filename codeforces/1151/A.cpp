#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,q,r,t=137939;
     cin>>n;
    string s;
    cin>>s;
     for(i=0;i<n-3;i++)
    {
        r=0;
        p=s[i]-'A';
        q='Z'-s[i];
        q+=1;
        r+=min(p,q);
       if(s[i+1]<'C')
       {
          r+='C'-s[i+1];
       }
       else{
            p=s[i+1]-'C';
        q='Z'-s[i+1];
        q+=3;
          r+=min(p,q);
       }

        if(s[i+2]>'T')
        {r+=s[i+2]-'T';
        }
        else{
        q='T'-s[i+2 ];
        p=s[i+2]-'A';
        p+=7;
        r+=min(p,q);
        }
        if(s[i+3]<'G')
        {
            r+='G'-s[i+3];
        }
        else{
            p=s[i+3]-'G';
            q='Z'-s[i+3];
            q+=7;
            r+=min(p,q);
        }
        if(r<t)
        {
            t=r;
        }

    }
    cout<<t<<endl;
}
