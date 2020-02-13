#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,n,i,j,k,l,r=0,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d>>e;
        l=(b+c)*2;
        if(l<=a)
        {
            cout<<(b*d)+(c*e)<<endl;
        }
        else if(a==1)
        {
            cout<<"0"<<endl;
        }
        else{
            if(d>e)
            {
                for(j=1;j<=b;j++)
                {
                    a=a-2;
                    if(a<=1)
                    {
                        r++;
                        break;
                    }
                }
                if(r!=1)
                {
                    j--;
                    for(k=1;k<=c;k++)
                    {
                        a=a-2;
                        if(a<=1)
                        {
                            s++;
                            break;
                        }
                    }
                    if(s!=1)
                    {
                        k--;
                        cout<<(j*d)+(k*e)<<endl;
                    }
                    else{
                        cout<<(j*d)+(k*e)<<endl;
                    }
                }
                else{
                        cout<<(j*d)<<endl;

                }
            }
            else{
                for(j=1;j<=c;j++)
                {
                    a=a-2;
                    if(a<=1)
                    {
                        r++;
                        break;
                    }
                }
                if(r!=1)
                {
                    j--;
                    for(k=1;k<=b;k++)
                    {
                        a=a-2;
                        if(a<=1)
                        {
                            s++;
                            break;
                        }
                    }
                    if(s!=1)
                    {
                        k--;
                        cout<<(j*e)+(k*d)<<endl;
                    }
                    else{
                        cout<<(j*e)+(k*d)<<endl;
                    }
                }
                else{
                        cout<<(j*e)<<endl;

                }


            }
        }
        r=0;
        s=0;

    }
    return 0;
}
