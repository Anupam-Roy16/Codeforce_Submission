#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char a[101];
    gets(a);
    int l=strlen(a);
    int b[100];
    int i;
    for( i=0;i<(l-1);i++)
    {
        int c=0;
        for(int j=i+1;((j<l)&&(a[i]!='0'));j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='0';
            }
        }
        b[i]=c;

    }
 

    for(int j=0;j<i;j++)
    {


        l=l-b[j];
    }
    if((l%2)==0)
    {
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else{
        cout<<"IGNORE HIM!"<<"\n";
    }
    return 0;
}
