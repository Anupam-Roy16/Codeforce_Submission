#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]==a[1])
        {
            if(a[1]==a[2])
            {
                cout<<"0"<<endl;
            }
            else{
                    if((a[2]-a[1])>2)
                  {cout<<(a[2]-a[0])+(a[2]-a[1])-4<<endl;}
                  else{
                    cout<<"0"<<endl;
                  }
            }
        }
        else{
            if(a[1]==a[2])
            {
                 if((a[1]-a[0])>2)
                {cout<<(a[1]-a[0])+(a[2]-a[0])-4<<endl;}
                else{
                    cout<<"0"<<endl;
                }
            }
            else{

                cout<<(a[1]-a[0])-4+(a[2]-a[0])+(a[2]-a[1])<<endl;

            }
        }
    }
    return 0;
}
