#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;

    cin>>n>>m;
    if((n==1)||(n==3)||(n==5)||(n==7)||(n==8)||(n==10)||(n==12))
    {
        n=31;
    }
    else if(n==2){
        n=28;
    }
    else{
        n=30;
    }
    m=8-m;
    n-=m;

    if(n%7==0)
    {
        cout<<(n/7)+1<<endl;
    }
    else{
        cout<<(n/7)+2<<endl;
    }

    return 0;
}
