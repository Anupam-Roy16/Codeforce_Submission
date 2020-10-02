#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,e=0,p,q=0,w=0;

	cin>>t;
	char a[t+1];
	cin>>a;
	p=t/2;
	for(i=0;i<t;i++)
	{
	    if((a[i]!='4')&&(a[i]!='7'))
        {

            e++;
            break;
        }
	    n=(int)a[i];
	    if(i<p)
        {
            q+=n;
        }
        else{
            w+=n;
        }
	}
	if(e==1)
    {
        cout<<"NO"<<endl;
    }
    else{
            if(q==w)
            {
                 cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    }
}
