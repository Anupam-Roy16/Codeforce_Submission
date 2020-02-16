#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(j=1;;j++)
    {
        int p=0;
    for(i=1;i<=n;i++)
    {

        int l=((i+1)*i)/2;
        if(l==m)
        {
            cout<<"0"<<endl;
            p++;
            break;
        }
        else if(l>m)
        {
            l-=i;
            m=m-l;
            cout<<m<<endl;
            p++;
            break;
        }
        else if((i==n)&&(l<m)){
            m=m-l;
            break;
        }

    }
    if(p==1)
    {
        break;
    }
    }
    return 0;
}
