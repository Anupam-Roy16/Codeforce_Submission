#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t,m,p;
    int a[36]={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>m;
    for(i=0;i<36;i++)
    {
        if(a[i]==m)
        {
            break;
        }

    }
    if(i==35)
    {
        cout<<"90"<<endl;
    }
    else{
        i++;
        p=i/4;
        t=i%4;
        int k;
        if(t==1)
        {
            k=1;
        }
        else if(t==2)
        {
            k=3;
        }
        else if(t==3){
            k=6;
        }
        else{
k=0;
}
        cout<<(p*10)+k<<endl;
    }

    }




    return 0;
}
