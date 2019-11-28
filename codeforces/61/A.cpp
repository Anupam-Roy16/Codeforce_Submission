#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[200],b[200];
    gets(a);
    gets(b);

    for(int i=0;i<strlen(a);i++)
    {
         cout<<(a[i]^b[i]);

    }
    cout<<"\n";

    return 0;
}
