#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,q,j;
    cin>>n;
    map<int, int>::iterator itr;
    vector<int>v;
    map<int,int>p;
    for(i=0;i<n;i++)
    {
        cin>>k;
        p[k]++;
    }
    j=0;
   
    for(auto i:p)
    {
        if(j==0)
        {
            q=i.second;
            j++;
        }
        else{
            if(q<=i.second)
            {
                q=i.second;
            }

        }
    }
    cout<<q<<endl;
    return 0;
}
