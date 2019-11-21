#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    char a[51];
    gets(a);
    int c=0;

    int r=0;
    int d[100];

    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }

    }
    if(c==(n-1))
    {

        cout<<n-1<<"\n";
    }
    else if(c==0)
       {

           cout<<"0"<<"\n";
       }
    else{

     for(int z=0;z<n-1;){
         int q=0;
         for(int j=z+1;j<n;j++)
         {
             if(a[z]==a[j])
             {
                 q++;
             }
             else{
                break;
             }
         }
         if(q!=0){
         d[r]=q;
         r++;
         }
        z=z+q+1;
     }
int sum=0;
 for(int i=0;i<r;i++)
 {
     sum=sum+d[i];
 }
    cout<<sum;
    }


    return 0;
}
