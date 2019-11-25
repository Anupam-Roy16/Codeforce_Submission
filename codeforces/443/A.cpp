#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    char b[1000];
    int p=0;
    gets(a);
    int c=0;
    int l=strlen(a);

    for(int i=1;i<l-1;i=i+3)
    {
        b[p]=a[i];
        p++;
    }
    for(int j=0;j<p-1;j++)
    {
        for(int k=j+1;k<p;k++)
        {
            if(b[j]==b[k])
            {
                b[k]='0';
            }

        }
    }
    for(int z=0;z<p;z++)
    {
        if(b[z]=='0')
        {
            c++;
        }
    }
    cout<<p-c<<"\n";
    return 0;
}
