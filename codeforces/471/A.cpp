#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[6],b[6],e=0,w=0;
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    sort(a,a+6);
    for(i=0;i<6;i++)
    {
        int p=0;
        for(j=0;j<6;j++)
        {
            if(a[i]==a[j])
            {
                p++;
            }
        }
        if(p>=4)
        {
            break;
        }
    }
    if(i==6)
    {
        cout<<"Alien"<<endl;
    }
    else{
        if(i==0)
        {
            if(a[4]==a[5])
            {
                cout<<"Elephant"<<endl;
            }
            else{
                cout<<"Bear"<<endl;
            }
        }
        else if(i==1)
        {
            if(a[0]==a[5])
            {
                cout<<"Elephant"<<endl;
            }
            else{
                cout<<"Bear"<<endl;
            }
        }
        else{
            if(a[0]==a[1])
            {
                cout<<"Elephant"<<endl;
            }
            else{
                cout<<"Bear"<<endl;
            }
        }
    }

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





