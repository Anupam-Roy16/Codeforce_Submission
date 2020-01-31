#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,c,d,z=0,p=0,q,r=0;
    cin>>n;
    int w[n];
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(i!=0)
        {
            if((c==a)&&(d==b))
            {
                r++;
                if((r==1)||(i-q)==1){
                p++;
                q=i;
                }
                else{
                w[z]=p;
                p=1;
                q=i;
                z++;

                }
            }
        }
        c=a;
        d=b;
    }
    w[z]=p;
    sort(w,w+z+1);

    cout<<w[z]+1<<endl;
    return 0;
}
