#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p=0,sum=0;
    cin>>n;
    int k=n;
    for(i=1;;i++)
    {
        if((n%10)!=0)
        {
            p++;
            n=n/10;
        }
        else{break;}
    }

    for(i=1;i<p;i++)
    {
        sum+=pow(2,i);
    }

    for(i=0;i<p;i++)
    {
        int l=k%10;

        if(l!=4)
        {
            sum+=pow(2,i);

        }

        k=k/10;
    }

    cout<<sum+1<<endl;

}
