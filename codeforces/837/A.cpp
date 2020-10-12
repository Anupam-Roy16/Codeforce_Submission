#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,p=0,q=0,i;
    scanf("%d ",&n);
    char a[n+1];
    gets(a);


     int b[n];
    for(i=0;i<n;i++)
    {
        if((a[i]>='A')&&(a[i]<='Z'))
        {
            p++;
        }

        if(a[i]==' ')
        {
            b[q]=p;
            p=0;
            q++;
        }
    }
if(q!=0)
{
    b[q]=p;
    q++;
}


    sort(b,b+q);
    if(q==0)
    {
        cout<<p<<endl;
    }
    else{
            cout<<b[q-1]<<endl;
    }
    return 0;

}
