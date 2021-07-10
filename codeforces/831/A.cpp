#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,x=0,y=0,z=0;
    vector<int>a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        a.push_back(p);
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        for(i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                if(y!=0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                x++;
            }
            else if(a[i]<a[i-1]){
                y++;
            }
            else{
                if((x!=0)||(y!=0))
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        cout<<"YES"<<endl;
    }
}
