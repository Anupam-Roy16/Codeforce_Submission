#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    int q,p,r,n,i;
    cin>>n;
    while(n--)
    {
        cin>>p;
        q=0;
        r=0;
        for(i=1;;i+=2)
        {
            r++;
            q+=i;
            if(q>=p)
            {
                break;
            }

        }
        cout<<r<<endl;
    }
}


