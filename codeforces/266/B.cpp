#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;

    //scanf("%d %d",&n,&t);
    cin>>n;
    cin>>t;
     //char a[100];
     string a;
    cin>>a;
    int b[100];

    for(int j=0;j<t;j++)
    {
        int b[100];
         int p=0;
         for( i=0;i<n-1;i++)
    {

        if((a[i]=='B')&&(a[i+1]=='G'))
        {
            b[p]=i;
            p++;
        }
    }
    for(int q=0;q<p;q++)
    {
        swap(a[b[q]],a[b[q]+1]);
    }

    }
    for( i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
