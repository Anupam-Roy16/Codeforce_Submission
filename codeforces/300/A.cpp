#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,p=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            p++;
        }
    }
    if(p!=0)
    {
        int r=0,k=n-p-1;
        if((k%2)!=0){
       for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(r==0)
            {
                cout<<n-p-1<<" "<<a[i];
                r++;
            }
            else{

            cout<<" "<<a[i];
            r++;

            }
        }
    }
    cout<<endl;
    int e=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            if(e==0)
            {
                cout<<p<<" "<<a[i];
                e++;
            }
            else{
                cout<<" "<<a[i];
            }
        }
    }
    cout<<endl;
     cout<<"1 0"<<endl;
    }
   else{
        for(i=0;i<n;i++)
    {
        if((a[i]<0)&&(r<(k-1)))
        {
            if(r==0)
            {
                cout<<n-p-2<<" "<<a[i];
                r++;
            }
            else{

            cout<<" "<<a[i];
            r++;

            }
        }
    }
    cout<<endl;
    int e=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            if(e==0)
            {
                cout<<p<<" "<<a[i];
                e++;
            }
            else{
                cout<<" "<<a[i];
            }
        }
    }
    cout<<endl;
     cout<<"2 ";
     for(i=n-1;i>=0;i--)
     {
         if(a[i]<0)
         {
             cout<<a[i]<<" 0"<<endl;
             break;
         }
     }
    }
    }

    else{
            int w=n-1-2,m=0;
            if((w%2)!=0){
       for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(m<w){
            if(m==0){
            cout<<w<<" "<<a[i];
            m++;
            }
            else{
                cout<<" "<<a[i];
                m++;
            }
            if(m==w)
            {
                cout<<endl;
            }
            }
            else{
                    if(m==w){
                cout<<"2 "<<a[i];
                m++;}
                else{
                    cout<<" "<<a[i]<<endl;
                }
            }

        }
    }
    cout<<"1 "<<"0"<<endl;
    }
    else{
        for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(m<w-1){
            if(m==0){
            cout<<w-1<<" "<<a[i];
            m++;
            }
            else{
                cout<<" "<<a[i];
                m++;
            }
            if(m==(w-1))
            {
                cout<<endl;
            }
            }
            else{
                    if(m==(w-1)){
                cout<<"2 "<<a[i];
                m++;}
                else{
                    cout<<" "<<a[i]<<endl;
                    break;
                }
            }

        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<0){
    cout<<"2 "<<"0 "<<a[i]<<endl;
    break;
    }
    }
    }
    }
    return 0;
}
