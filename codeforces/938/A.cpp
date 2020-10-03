#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    char a[t+1];
    cin>>a;
    for(i=0;i<t-1;i++)
    {
        if((((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='y'))&&((a[i+1]=='a')||(a[i+1]=='e')||(a[i+1]=='i')||(a[i+1]=='o')||(a[i+1]=='u')||(a[i+1]=='y')))||((a[i]=='0')&&((a[i+1]=='a')||(a[i+1]=='e')||(a[i+1]=='i')||(a[i+1]=='o')||(a[i+1]=='u')||(a[i+1]=='y'))))
        {
            a[i+1]='0';
        }
    }
    for(i=0;i<t;i++)
    {
        if(a[i]!='0')
        {
            cout<<a[i];
        }
    }
    cout<<endl;
}
