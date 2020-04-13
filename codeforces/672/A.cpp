#include<bits/stdc++.h>
using namespace std;
int main()
{
  int p=0,n,i;
  cin>>n;
  //int a[]={9,180,}
  if(n<=9)
  {
    cout<<n<<endl;
  }
  else if(n<=(9+180))
  {
      n-=9;
      int m;
      if((n%2)==0)
      {
          n/=2;
          m=10+(n-1);
          cout<<m%10<<endl;
      }
      else{
        n=(n/2)+1;
        m=10+(n-1);
        cout<<m/10<<endl;
      }
  }
  else{
        int k;
    n-=189;
    //n/=3;

    if((n%3)==0)
    {
        n/=3;
        k=100+(n-1);
        cout<<k%10<<endl;
    }
    else if((n%3)==1){
            n/=3;
            n++;
        k=100+(n-1);
        cout<<k/100<<endl;
    }
    else{
         n/=3;
         n++;
        k=100+(n-1);
        k/=10;

        cout<<k%10<<endl;
    }
  }
   return 0;
}
