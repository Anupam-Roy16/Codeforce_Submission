#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=0;
    char a[101];
    cin>>a;
    n=strlen(a);
    for(int i=0;i<n;i++)
    {
    if((a[i]!='a')&&(a[i]!='e')&&(a[i]!='i')&&(a[i]!='o')&&(a[i]!='u')&&(a[i]!='n'))
    {
        if((a[i+1]=='a')||(a[i+1]=='e')||(a[i+1]=='i')||(a[i+1]=='o')||(a[i+1]=='u'))
        {
          //cout<<"YES"<<endl;
        }
        else{
                k++;
            cout<<"NO"<<endl;
            break;
        }

    }
    }
    if(k==0)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
