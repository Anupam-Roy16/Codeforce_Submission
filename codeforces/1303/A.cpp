#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,p=0,k,sum=0;
    cin>>n;
    char a[101];
    for(i=0;i<n;i++)
    {
        cin>>a;
        int l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]=='1')
            {
                sum=sum+p;
                p=0;
                for(k=j+1;;k++)
                {
                    if(a[k]=='0')
                    {
                        p++;
                    }
                    else{

                        break;
                    }
                }

            }

        }
        cout<<sum<<endl;
        sum=0;
        p=0;
    }
    return 0;
}
