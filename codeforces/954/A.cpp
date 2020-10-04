#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q,i,a,c,p=0;
    cin>>a;
    char b[a];
    cin>>b;
    for(i=0;i<a-1;)
    {
        if(((b[i]=='R')&&(b[i+1]=='U'))||((b[i]=='U')&&(b[i+1]=='R')))
        {
            p++;
            i+=2;
        }
        else{
            i++;
        }
    }
    cout<<a-p<<endl;
    return 0;
}
