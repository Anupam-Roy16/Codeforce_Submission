#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,t, n,i,j,p=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        if(t==3)
        {
            cout<<"7"<<endl;
        }
        else{
                p=t/2;
                if(t%2!=0)
                {
                    p--;
        cout<<"7";
                }


            for(j=0;j<p;j++)
            {
                cout<<"1";
            }
            cout<<endl;
        }
    }

    return 0;
}
