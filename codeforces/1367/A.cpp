#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        char a[101];
        cin>>a;
        int l=strlen(a);
        for(int j=0;j<l;j+=2)
        {
            if(j==(l-2))
            {
                cout<<a[j]<<a[j+1]<<endl;
            }
            else{
                cout<<a[j];
            }
        }




    }

    return 0;
}
