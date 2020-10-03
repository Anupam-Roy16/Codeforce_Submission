#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,j,r=-1,w=0,p=-1,q=0;
    cin>>t>>m;
    char a[t][m];
    for(i=0;i<t;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if((a[i][j]=='B')&&(p==-1))
            {
                r=i;
                p=i;
                q=j;
            }
            if((a[i][j]=='B')&&(r==i))
            {
                w++;
            }
        }
    }

    if(w==1)
    {
        cout<<p+1<<" "<<q+1<<endl;
    }
    else{
        w/=2;
        cout<<p+w+1<<" "<<w+q+1<<endl;
    }

}
