#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,j,k,n,m,c,l,i,p,q,r;
    cin>>l;
    for(i=0;i<l;i++)
    {
        cin>>a>>b>>c;
        p=a;
        q=b;
        r=c;
        if(b==0)
        {
            cout<<"0"<<endl;
        }
        else{
            for(j=1;;j++)
            {
                a-=1;
                b-=2;
                if((a<=0)||(b<2))
                {
                    break;
                }
            }
            if((a<0)||(b<0))
            {
                n=0;
            }
            else if(b<2)
            {
                n=j*3;
            }
            else{
            for(k=1;;k++)
            {
                b-=1;
                c-=2;
                if((b==0)||(c<2))
                {
                    break;
                }
            }
                if(c<0)

            {n=j*3;
            }
            else{
                n=(j*3)+(k*3);
            }
        }
        a=p;
        b=q;
        c=r;
         for(j=1;;j++)
            {
                b-=1;
                c-=2;
                if((b==0)||(c<2))
                {
                    break;
                }
            }
            if(c<0)
            {
                m=0;
            }
            else if(b==0)
            {
                m=j*3;
            }
            else{
            for(k=1;;k++)
            {
                a-=1;
                b-=2;
                if((a<=0)||(b<2))
                {
                    break;
                }
            }
                if((a<0)||(b<0))

            {m=j*3;
            }
            else{
                m=(j*3)+(k*3);
            }
        }


        if(n<m)
        {
            cout<<m<<endl;
        }
        else{cout<<n<<endl;}

    }

}
return 0;
}
