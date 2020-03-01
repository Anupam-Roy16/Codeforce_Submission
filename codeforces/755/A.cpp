#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"3"<<endl;
    }
    else if((n%2)!=0)
    {
        cout<<"1"<<endl;
    }
    else if((n%2)==0)
    {
        for(int i=4;;i++)
        {
            int p=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if((i%j)==0)
            {
                p++;
                break;
            }
        }

            if((p==1)&&(i%n)==1)
            {
                cout<<i/n<<endl;
                break;
            }
        }

    }

}
