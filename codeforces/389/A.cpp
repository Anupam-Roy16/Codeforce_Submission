#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,n,m,i,l,j,t=0,k;
    cin>>n;
    vector<int> p;
    for(i=0;i<n;i++)
    {
        cin>>k;
        p.push_back(k);
    }
    sort(p.rbegin(),p.rend());
    for(int y=0;;y++)
    {

        t=0;
        for(i=1;i<n;i++)
        {
            if(p[i]<p[0])
            {
                 t++;
                 p[0]-=p[i];
                 sort(p.rbegin(),p.rend());
                 break;

            }
        }

        if(t==0)
        {
            break;
        }

    }
  
    cout<<p[0]*n<<endl;
    return 0;
}





















