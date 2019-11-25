#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[4];
    for(int i=0;;i++)
    {
        n++;
        int k=n;
        for(int j=0;j<4;j++)
        {
            a[j]=k%10;
            k=k/10;
        }
        int c=0;
        for(int m=0;m<3;m++)
        {
            for(int n=m+1;n<4;n++)
        {
            if(a[m]!=a[n])
            {
                c++;
            }
        }
        }
        if(c==6)
        {
            break;
        }

    }
    cout<<n<<"\n";;
    return 0;
}
