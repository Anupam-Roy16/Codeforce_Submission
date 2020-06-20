#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a,n;
    cin>>a;
    for(int i=0;i<a;i++)
    {


    cin>>n;
    if((n%2)==0)
    {
        cout<<n/2<<endl;
    }
    else{
        cout<<(n-1)/2<<endl;
    }
    }


}
