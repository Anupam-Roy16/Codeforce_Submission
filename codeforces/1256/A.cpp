#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,p,s,n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>p>>s;
        if(s<=b)
        {
            cout<<"YES"<<endl;
        }
        else{
            int c,d;
            c=s/p;
            if(a>=c)
            {
                d=s%p;;
                if(d<=b)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }

            }
            else{
                a*=p;
                s-=a;
                if(s<=b)
                {
                    cout<<"YES"<<endl;
                }

                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }


}
