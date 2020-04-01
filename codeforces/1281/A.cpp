#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    char a[1001];
    for(i=0;i<t;i++)
    {
        cin>>a;
        int l=strlen(a);
        if(a[l-1]=='o')
        {
            cout<<"FILIPINO"<<endl;
        }
        else if(a[l-1]=='u'){
            cout<<"JAPANESE"<<endl;
        }
        else if(a[l-1]=='a')
        {
            cout<<"KOREAN"<<endl;
        }
    }
    return 0;
}
