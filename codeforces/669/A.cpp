#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n==1)||(n==2))
    {
        cout<<"1"<<endl;
    }
    else if((n%3)==0){
            cout<<((n/3)*2)<<endl;

    }
    else{
         cout<<((n/3)*2)+1<<endl;

    }
    return 0;
}
