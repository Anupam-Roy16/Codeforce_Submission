#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,i;
    cin>>q;
    for(i=0;i<q;i++)
    {
        long long j,n,p=0;
        cin>>n;
        for(j=1;;j++)
        {
            if(n==1){break;}
            if((n%2)==0)
            {
                n/=2;
            }
            else if((n%3)==0)
            {

                n=(2*n)/3;
            }
            else if((n%5)==0){
                n=(4*n)/5;
            }
            else{
                    p++;
                cout<<"-1"<<endl;
                break;
            }
        }
        if(p==0)cout<<j-1<<endl;
    }
    return 0;
}
