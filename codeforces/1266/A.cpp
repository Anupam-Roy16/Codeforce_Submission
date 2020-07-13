#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,i,j;
    cin>>n;
    char a[100];
    for(i=0;i<n;i++)
    {
        int p=0,q=0,t=0;
        cin>>a;
        int l=strlen(a);
        for(j=0;j<l;j++)
        {
            int y=(int)a[j]-48;

            if(a[j]=='0')
            {
                p++;
            }
            if(((y%2)==0))
            {
                if(y==0)
                {
                    if(p>1)
                    {
                        t++;
                    }
                }
                else{
                t++;
                }
            }
            q+=((int)a[j]-48);
        }
        if((p!=0)&&((q%3)==0)&&(t!=0))
        {
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }
    }


    return 0;
}
