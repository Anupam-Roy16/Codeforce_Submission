#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        for(j=1;;j++)
        {
            if(a<=b)
            {
                a+=b;
            }
            else{
                b+=a;
            }
            if((a>c)||(b>c))
            {
                break;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}
