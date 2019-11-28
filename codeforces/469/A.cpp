#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,n,c,d,i;
    cin>>n;
    cin>>c;
    int a[c];
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    sort(a,a+c);
    cin>>d;
    int b[d];
    for(i=0;i<d;i++)
    {
        cin>>b[i];
    }
    sort(b,b+d);

    for( j=1;j<=n;j++)
    {
         int z=0,y=0;
        for(int k=0;k<c;k++){
        if(j==a[k])
        {
           z++;
        }

        }
        if(z==0){
        for(int p=0;p<d;p++)
        {
            if(j==b[p])
            {
                y++;
            }
        }
        if(y==0)
        {
            cout<<"Oh, my keyboard!"<<"\n";
            break;
        }
        }

    }
    if(j==(n+1))
    {
        cout<<"I become the guy."<<"\n";

    }


    return 0;
}
