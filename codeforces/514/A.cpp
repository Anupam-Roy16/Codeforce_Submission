#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    unsigned long long i;
    unsigned long long a[18];
    if((n>=1)&&(n<=9))
        {

            if(n==9)
            {
                cout<<n<<endl;
            }
            else if(n>=5)
            {
                cout<<9-n;
            }
            else{
                cout<<n<<endl;
            }
        }
        else{
    for(i=0;;i++)
    {
        if((n>=1)&&(n<=9))
        {
            break;
        }
        else if((n%10)>=5)
        {
            a[i]=9-(n%10);

        }
        else if((n%10)<5)
         {
            a[i]=(n%10);

        }
        n=n/10;
    }
    //
    if(n>=5)
    {
        if(n==9)
        {
            a[i]=9;
        }
        else{
         a[i]=9-n;
        }//cout<<9-n<<endl;
    }
    else{
            a[i]=n;

    }
    for(int j=i;j>=0;j--)
    {
        cout<<a[j];
    }
        }

    return 0;
}
