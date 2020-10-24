#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p=0,m,q=0;
    char a[202];
    gets(a);
    p=strlen(a);
    for(i=p-1;i>=0;i--)
    {
        if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))
        {
            break;
        }
    }
   
    if((a[i]=='y')||(a[i]=='Y')||(a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
