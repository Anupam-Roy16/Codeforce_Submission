#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    char b[200];
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
        if((a[i]=='Y')||(a[i]=='y')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U')||(a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
        {
          a[i]='1';
        }
        else if((('A'<a[i])||(a[i]=='A'))&&(('Z'>a[i])||(a[i]=='Z')))
        {
            a[i]=a[i]+32;
        }
    }
    int p=0;
      for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!='1'){
        b[p]=a[i];
        p++;
        }
    }
       for(int i=0;i<p;i++)
    {

        if(('a'<=b[i])&&(b[i]<='z'))
        {
            cout<<"."<<b[i];
        }
        else{
        cout<<b[i];
        }
    }
    cout<<"\n";

    return 0;
}
