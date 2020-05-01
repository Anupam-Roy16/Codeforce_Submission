#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*char q='y';
    while(q=='y'){

    float x,y,z,w;
    int c,a,b,l,m,n;
    x=rand()/32768.0;
    a=1+(int)(6*x);
    y=rand()/32768.0;
    b=1+(int)(6*y);
    c=a+b;
    int p=0;
    cout<<"throw result: "<<c<<endl;
    if((c==7)||(c==11))
    {
        cout<<"win"<<endl;
        p++;
    }
    else if((c==2)||(c==3)||(c==12)){
        cout<<"loss"<<endl;
        p++;
    }
    if(p==0){
            while(1){
    z=rand()/32768.0;
    l=1+(int)(6*z);
    w=rand()/32768.0;
    m=1+(int)(6*w);
    n=l+m;
    cout<<"Repeated throw result: "<<n<<endl;
    if(n==c)
    {
        cout<<"win"<<endl;
        break;
    }
    else if(n==7){
        cout<<"loss"<<endl;
        break;
    }
    }

    }
    cout<<"do you want to play? y/n"<<endl;
    cin>>q;
    }*/
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        if(a[n-1]==a[n-2])
        {
            if((a[n-1]-1)<=(n-2))
            {
                cout<<a[n-1]-1<<endl;
            }
            else{
                cout<<n-2<<endl;
            }
        }
        else{
            if((a[n-2]-1)<=(n-2))
            {
                cout<<a[n-2]-1<<endl;
            }
            else{
                cout<<n-2<<endl;
            }
        }

    }
return 0;
}


