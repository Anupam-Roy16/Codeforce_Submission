#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[11];
    gets(a);
    if(a[0]!='1'){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<strlen(a);i++)
        {
            if((a[i]!='1')&&(a[i]!='4'))
            {
                cout<<"NO"<<endl;
                 return 0;
            }
        }
        int l=strlen(a);
        if(l>2){
         for(int i=0;i<strlen(a)-2;i++)
        {
            if(a[i]=='4')
            {
                if((a[i+1]=='4')&&(a[i+2]=='4'))
                {
                    cout<<"NO"<<endl;
                 return 0;
            }
                }
            }
        }
            cout<<"YES"<<endl;
        }


    return 0;
}
