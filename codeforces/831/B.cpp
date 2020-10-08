#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q,r,i,j=-1,p=0;
    char  a[26],b[26];
    char c[1001];
    for(i=0;i<26;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<26;i++)
    {
        cin>>b[i];
    }
    cin>>c;
    char t;
    p=strlen(c);
    for(i=0;i<p;i++)
    {
        int w=0;
        if((c[i]>='A')&&(c[i]<='Z'))
        {
            w++;
          t=c[i]+(97-65);
        }
        else if((c[i]>='a')&&(c[i]<='z'))
        {

            t=c[i];
        }
        else{
            t='0';
        }
        if(t=='0')
        {
            cout<<c[i];
        }
        else{
        for(j=0;j<26;j++)
        {
            if(t==a[j])
            {
                if(w==0)
                {
                   cout<<b[j];
                }
                else{
                    cout<<(char)(b[j]-(97-65));
                }
                break;
            }
        }
        }

    }
    cout<<endl;
    return 0;
}
