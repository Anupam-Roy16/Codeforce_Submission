#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
	fastIO();
	int t=0,r,n,i,p,q,y;
	char c;
	cin>>n>>c>>p;
	q=n;
	if(n>9)
    {
        i=n%10;
        n=n/10;
        i*=10;
        n+=i;
    }
    else{
        n*=10;
    }
    if(n>p)
    {
        if(n<60){
        if(q>9)
        {
            cout<<q<<c<<n<<endl;
        }
        else{

            cout<<"0"<<q<<c<<n<<endl;
        }
        }
        else{
            if(q==23)
            {
                  cout<<"00:00"<<endl;
            }
            else{
                    y=q;
                    y/=10;
                       y++;
                      int u=y;
                      y*=10;
                      cout<<y<<c<<"0"<<u<<endl;
            }
        }
    }
    else{
        if(q!=23)
        {
            q++;
            if(q<9)
            {

                cout<<"0"<<q<<c<<q*10<<endl;

            }
            else{

                int y=q;
                 i=q%10;
                 q=q/10;
                 i*=10;
                 q+=i;

                 if(q>59)
                 {
                      y/=10;
                      y++;
                      int u=y;
                      y*=10;
                      cout<<y<<c<<"0"<<u<<endl;
                 }
                 else{
                    cout<<y<<c<<q<<endl;
                 }


            }


        }
        else{
            cout<<"00:00"<<endl;
        }
    }
}
