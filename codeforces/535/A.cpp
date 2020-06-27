#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    char a[9][20]={"one","two","three","four","five","six","seven","eight","nine"};
    char b[9][20]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
  cin>>i;
  if(i==0)
  {
      cout<<"zero"<<endl;
  }
       else if((i>=0)&&(i<=9))
        {
            cout<<a[i-1]<<endl;
        }
        else if((i%10)==0)
        {
            int p=i/10;
            cout<<b[p-1]<<endl;
        }
        else if(i==11)
        {
            cout<<"eleven"<<endl;
        }
        else if(i==12)
        {
            cout<<"twelve"<<endl;
        }
        else if(i==13)
        {
            cout<<"thirteen"<<endl;
        }
        else if(i==14)
        {
            cout<<"fourteen"<<endl;

        }
        else if(i==15)
        {
            cout<<"fifteen"<<endl;
        }
        else if((i>=16)&&(i<=19))
        {
            if(i==18)
            {
                cout<<"eighteen"<<endl;
            }
            else{

            int p=i-10;
            p--;
            cout<<a[p]<<"teen";
            }
        }
        else{
            int p=i/10;
            int q=i%10;
            p--;
            q--;
            cout<<b[p]<<"-"<<a[q]<<endl;
        }




    return 0;
}
