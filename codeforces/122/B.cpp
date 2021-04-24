#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,l,j,p=0,q=0;
    string s;
    cin>>s;
    l=s.size();
    for(j=0;j<l;j++)
    {
        if(s[j]=='4')
        {
            p++;
        }
        else if(s[j]=='7')
        {
            q++;
        }
    }
    l=max(p,q);
    if(l==0)
    {
        cout<<"-1"<<endl;
    }
    else{
            if(l==p)
    {cout<<"4"<<endl;
    }
    else{
        cout<<"7"<<endl;
    }
    }
    return 0;
}
