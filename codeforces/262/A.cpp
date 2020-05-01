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
    int t,n,j,q=0,i;
    cin>>t>>n;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        int p=0;
        int w=a[i];
        for(j=1;;j++)
        {
            int v=w%10;
            w/=10;
            if((v==4)||(v==7))
            {
                p++;
            }
            if(w==0)
            {
                break;
            }
        }

        if(p<=n)
        {
            q++;

        }

    }


    cout<<q<<endl;
return 0;
}


