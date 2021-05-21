#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p,q,j,m,i,t,r,e,w,a=0;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>p;
        if(p<10)
        {
            cout<<p<<endl;
        }
        else{
            if(p<111)
            {
                m=1;
            }
            else if(p<1111)
            {
                m=2;
            }
            else if(p<11111)
            {
                m=3;
            }
            else if(p<111111)
            {
                m=4;
            }
            else if(p<1111111)
            {
                m=5;
            }
            else if(p<11111111)
            {
                m=6;
            }
            else if(p<111111111)
            {
                m=7;
            }
            else if(p<1111111111)
            {
                m=8;
            }
            for(i=1;i<10;i++)
            {
                w=0;
                a=0;
                for(int k=m;k>0;k--)
                {
                    r=k;
                    t=1;
                    while(r--)
                    {
                        t*=10;
                    }
                   w+=(i*t);
                }
                w+=i;
                if(p<w)
                {
                    a++;
                    break;
                }
            }
            if(a==0)
            {
                cout<<(m*9)+9<<endl;
            }
            else{
                cout<<(m*9)+i-1<<endl;
            }
        }
    }
	return 0;
}
