#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m,i,j;
    char c,d;
    cin>>n>>m;
    char r[n+1];
    cin>>r;

    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        cin>>c>>d;
        for(j=a-1;j<b;j++)
        {
            if(r[j]==c)
            {
                 r[j]=d;
            }
        }
    }
    cout<<r;
    return 0;
}
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





