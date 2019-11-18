#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d\n",&a);
        char b[100001];
        char c[100001];
        gets(b);
        gets(c);
        int z=0;
        int q;
        int r[1000];
        int p=0;
        for( q=0;q<a;q++)
        {

                if(b[q]!=c[q])
                {
                  r[p]=q;
                  p++;
                }

        }
        
int l=0;
        for(int j=r[l];j<a;j=r[l++])
        {

            for(int k=r[l];k<a;k=r[l++])
            {
                swap(b[j],c[k]);
                if(strcmp(b,c)==0)
                {
                    z++;

                    cout<<"Yes"<<"\n";
                    break;
                }
                swap(b[j],c[k]);
            }
             if(z==1)
            {
                break;
            }

        }
        if(z==0)
        {
            cout<<"No"<<"\n";
        }

    }
    return 0;
}

