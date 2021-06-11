#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
	fastIO();
	int t,i,q,r,m,x=0,j;
	cin>>t>>r;
	i=t;
	while(i<=r)
    {
        m=i;
        for(j=0;;j++)
        {
            q=m%10;
            if(q==0)
            {
                x+=6;
            }
            else if(q==1)
            {
                x+=2;
            }
            else if(q==2)
            {
                x+=5;
            }
            else if(q==3)
            {
                x+=5;
            }
            else if(q==4)
            {
                x+=4;
            }
            else if(q==5)
            {
                x+=5;
            }
            else if(q==6)
            {
                x+=6;
            }
            else if(q==7)
            {
                x+=3;
            }
            else if(q==8)
            {
                x+=7;
            }
            else if(q==9)
            {
                x+=6;
            }
            m/=10;
            if(m==0)
            {
                break;
            }
        }
        i++;
    }
    cout<<x<<endl;
    return 0;
}


