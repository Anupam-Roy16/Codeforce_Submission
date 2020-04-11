#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,min=1000000000;
    int i,j,n;
    cin>>a>>b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        double c,d,e;
        cin>>c>>d>>e;
        double p=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
        p=p/e;
        if(min>p)
        {
            min=p;
        }
    }
    printf("%.20lf\n",min);
    return 0;
}
