#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n+1;;i++)
    {
        int p=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if((i%j)==0)
            {
                p++;
                break;
            }
        }
        if(p!=1){
            if(i==m)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            break;
        }
    }
    return 0;
}
