#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    gets(a);
    
    int l=strlen(a);
    int c=0,d=0,i;
    for(i=0;i<l;i++)
    {
        if((a[i]>='A')&&(a[i]<='Z'))
        {
            c++;
        }
        else{
            d++;
        }
    }
    if(c==d)
    {
        for(i=0;i<l;i++)
    {
        if((a[i]>='A')&&(a[i]<='Z'))
        {
            cout<<(char)(a[i]+32);
        }
        else{
            cout<<a[i];
        }
    }
    cout<<"\n";

    }
    else if(c>d){
                for(i=0;i<l;i++)
    {
        if((a[i]>='a')&&(a[i]<='z'))
        {
            cout<<(char)(a[i]-32);
        }
        else{
            cout<<a[i];
        }
    }
    cout<<"\n";


    }
    else
    {
            for(i=0;i<l;i++)
    {
        if((a[i]>='A')&&(a[i]<='Z'))
        {
            cout<<(char)(a[i]+32);
        }
        else{
            cout<<a[i];
        }
    }
    cout<<"\n";


    }
    return 0;
}
