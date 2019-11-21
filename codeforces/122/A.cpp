#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={4,7,44,47,74,77,444,447,474,477};
    int n;
    int c=0;
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        if((n%a[i])==0)
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
