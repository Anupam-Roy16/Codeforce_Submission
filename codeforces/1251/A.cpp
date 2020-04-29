#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    cin>>n;
    char a[501];
    int b[500];
    for(i=0;i<n;i++)
    {
        cin>>a;
        int j,l=strlen(a),p=0;
        if(l==1)
        {
            cout<<a<<endl;
        }
        if(l!=1){
        for(j=0;j<l;)
        {
            if(j==(l-1))
            {
                 b[p]=(int)a[j];
                 p++;
                 j++;
            }
            else if(a[j]!=a[j+1])
            {
               b[p]=(int)a[j];
               p++;
               j++;
            }
            else{
                j+=2;
            }
        }
        }
        if((p==0)&&(l!=1))
        {
            cout<<" "<<endl;
        }
        else if(l!=1){
        sort(b,b+p);
        int k,r;
        for(k=0;k<p;)
        {
            cout<<(char)(b[k]);
            for(r=k+1;;r++)
            {
                if(b[r]!=b[k])
                {
                    break;
                }
            }
            k=r;

        }
        cout<<endl;
        }
    }
    return 0;

}
