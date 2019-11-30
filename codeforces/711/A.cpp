#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0,n,j;
    char a[1000][5] ;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            if((a[i][j]=='O')&&(a[i][j+1]=='O'))
            {
                c++;
                break;
            }
        }
        if(c==1)
        {
            break;
        }
    }
    if(c!=1)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
        a[i][j]='+';
        a[i][j+1]='+';
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
 return 0;
}
