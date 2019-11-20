#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    gets(a);
    int l=strlen(a);
    int c=0;
    if(l<7)
    {

        cout<<"NO"<<"\n";
    }
    else
    {
        for(int i=0;;i++)
        {
            if((a[i]=='0')&&(a[i+1]=='0')&&(a[i+2]=='0')&&(a[i+3]=='0')&&(a[i+4]=='0')&&(a[i+5]=='0')&&(a[i+6]=='0'))
            {
                c++;
                cout<<"YES"<<"\n";
                break;
            }
            else if((a[i]=='1')&&(a[i+1]=='1')&&(a[i+2]=='1')&&(a[i+3]=='1')&&(a[i+4]=='1')&&(a[i+5]=='1')&&(a[i+6]=='1'))
            {
                c++;
                cout<<"YES"<<"\n";
                break;
            }

            if((i+7)>(l-1))
            {
                break;
            }

        }
        if(c==0)
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
