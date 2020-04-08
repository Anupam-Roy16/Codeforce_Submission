#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100001];
    cin>>a;
    int l=strlen(a),i,j,p=0;
    for(i=0;i<l;i++)
    {
        if(a[i]=='0')
        {
            p++;
            break;
        }
    }
    if(p!=0)
    {
        for(j=0;j<l;j++)
        {
            if(j!=i){
            cout<<a[j];
            }
        }
        cout<<endl;

    }
    else{
         for(j=1;j<l;j++)
        {
            cout<<a[j];
        }
        cout<<endl;

    }
    return 0;
}
