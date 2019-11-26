#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    gets(a);
    int c=0;
    for(int i=0;i<strlen(a);i++)
    {
        if((a[i]=='H')||(a[i]=='Q')||(a[i]=='9'))
        {
             c++;
            cout<<"YES"<<"\n";
            break;
        }
    }
    if(c==0)
    {
        cout<<"NO"<<"\n";
    }
return 0;
}
