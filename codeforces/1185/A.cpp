#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],d;
    cin>>a[0]>>a[1]>>a[2]>>d;
    sort(a,a+3);
    if(((a[1]-a[0])<d)&&((a[2]-a[1])<d))
    {
         cout<<(d-(a[1]-a[0]))+(d-(a[2]-a[1]))<<endl;
    }
    else if((a[1]-a[0])<d){
         cout<<(d-(a[1]-a[0]))<<endl;
    }
    else if((a[2]-a[1])<d)
    {
        cout<<(d-(a[2]-a[1]))<<endl;

    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}
