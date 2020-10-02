#include<bits/stdc++.h>
using namespace std;
int main()
{


	int n,t,i,j;
	cin>>t;
	int a[t];
	for(i=0;i<t;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+t);


	for(i=0;(i<(t-1));i++)
    {
       if(a[i]==0)
       {
           continue;
       }


        for(j=i+1;(j<t);j++)
        {
            if(a[j]==0)
            {
                continue;
            }

            if(a[j]%a[i]==0)
            {
                a[j]=0;
            }
        }
    }

    int p=0;
    for(i=0;i<t;i++)
	{
	    if(a[i]!=0)
        {
            p++;
        }
	}
	cout<<p<<endl;

}
