#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,r=0;
    string s,p,q;
    getline( cin, s );
    getline( cin, p);
    getline( cin, q );
    for(i=0;i<s.size();i++)
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
        {
           r++;
        }
    }
    if(r==5)
    {
        r=0;
        for(i=0;i<p.size();i++)
    {
        if((p[i]=='a')||(p[i]=='e')||(p[i]=='i')||(p[i]=='o')||(p[i]=='u'))
        {
           r++;
        }
    }
    if(r==7)
    {
        r=0;
        for(i=0;i<q.size();i++)
    {
        if((q[i]=='a')||(q[i]=='e')||(q[i]=='i')||(q[i]=='o')||(q[i]=='u'))
        {
           r++;
        }
    }
     if(r==5)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }

    }
    else{
        cout<<"NO"<<endl;
    }
}

