#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n==1)||(n==2)||(n==3)||(n==4)||(n==5))
    {
        cout<<"1"<<"\n";
    }
    else{
        if((n%5)==0)
        {
            cout<<n/5<<"\n";
        }
        else{
            int l=n%5;
            if((l%4)==0)
            {
                cout<<((n/5)+(l/4))<<"\n";
            }
            else{
                int p=l%4;
            if((p%3)==0)
            {
                cout<<((n/5)+(l/4)+(p/3))<<"\n";
            }
            else{
                    int q=p%3;
                if((q%2)==0)
                {
                     cout<<((n/5)+(l/4)+(p/3)+(q/2))<<"\n";
                }
                else
                {
                    int r=q%2;
                    if((r%2)==0)
                    {
                       cout<<((n/5)+(l/4)+(p/3)+(q/2)+(r/2))<<"\n";
                    }
                    else{
                            cout<<((n/5)+(l/4)+(p/3)+(q/2)+(r/2)+1)<<"\n";

                    }
                }
            }

            }
        }

    }
    return 0;
}
