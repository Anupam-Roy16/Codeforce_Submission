#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==1){
        sum+=i+(i-1)*4;}
        else{
            sum+=(i-1)*4;
        }
    }
    cout<<sum<<endl;

    return 0;
}
