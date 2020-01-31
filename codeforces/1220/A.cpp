#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,d=0;
    cin>>n;
    char b[n];
    //gets(b);
    scanf("%s",b);
    int l=strlen(b);
    for(i=0;i<l;i++)
    {
        if(b[i]=='n')
        {
            c++;
        }
        if(b[i]=='z')
        {
            d++;
        }
    }
    for(i=0;i<c;i++)
    {
        cout<<"1";
        if(i!=(c-1))
        {
            cout<<" ";
        }
    }
    if((d!=0)&&(c!=0))
    {
        cout<<" ";
    }

    for(i=0;i<d;i++)
    {
       cout<<"0";
        if(i!=(d-1))
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
