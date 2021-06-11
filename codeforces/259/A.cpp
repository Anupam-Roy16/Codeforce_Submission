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
	int i,a,q,r=0,j;
	char c,k;
	vector<char>p[8][8];
	for(i=0;i<8;i++)
    {
        a=0;
        q=0;
        for(j=0;j<8;j++)
        {
           cin>>c;
           if(j>0)
           {
               if(c==k)
               {
                   r++;
               }
           }
           p[i][j].push_back(c);
           if(c=='W')
           {
               a++;
           }
           else{
            q++;
           }
           k=c;
        }
        if(a!=q)
        {
            r++;
        }
    }
    if(r==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


