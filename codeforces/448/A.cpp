#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,m,a,b,c,d,e,f,g,sum=0;
    cin>>a>>b>>c>>d>>e>>f>>g;
    l=a+b+c;
    m=d+e+f;
    if((0<l)&&(l<5))
    {
        sum++;
    }
    else if(((l%5)!=0)&&(l>=5)){
        sum=sum+(l/5)+1;

    }
    else if(((l%5)==0)&&(l>=5)){
        sum=sum+(l/5);
    }
    if((0<m)&&(m<10))
    {
        sum++;
    }
    else if(((m%10)==0)&&(m>=10)){

        sum=sum+(m/10);

    }
    else if(((m%10)!=0)&&(m>=10)){

        sum=sum+(m/10)+1;

    }

    if(sum>g)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
