#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[6][6];
    int l=0;
    int p,q;
    int i,j;

    for( i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            cin>>a[i][j];
        }
    }


       for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            if(a[i][j]==1)
            {
                p=i;
                q=j;
                break;
            }
        }
    }

    i=p;
    j=q;
    if((i==3)&&(j==3))
    {

        cout<<"0"<<"\n";
    }
    else if((i==3)&&(j<3))
    {
        cout<<3-j<<"\n";
    }
    else if((i==3)&&(j>3))
    {
        cout<<j-3<<"\n";
    }
    else if((j==3)&&(i>3))
    {
         cout<<i-3<<"\n";
    }
    else if((j==3)&&(i<3))
    {
         cout<<3-i<<"\n";
    }
    else{
            if(i<3)
            {
                l=l+3-i;
            }
            else{
                l=l+i-3;
            }

            if(j<3)
            {
                l=l+3-j;
            }
            else{
                l=l+j-3;
            }
        cout<<l<<"\n";
    }

    return 0;

}
