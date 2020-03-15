#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=n%4;
    if(n==0)
    {
     cout<<"1 "<<"A"<<endl;
    }
    else if(n==1){
        cout<<"0 "<<"A"<<endl;
    }
    else if(n==2){
        cout<<"1 "<<"B"<<endl;
    }
    else if(n==3){
        cout<<"2 "<<"A"<<endl;
    }
    return 0;
}
