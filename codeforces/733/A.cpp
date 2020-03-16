#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p=0;
    char a[100];
    int b[1000];
    cin>>a;
    int l=strlen(a);
    if(l==1)
    {
        if((a[0]=='A')||(a[0]=='E')||(a[0]=='I')||(a[0]=='O')||(a[0]=='U')||(a[i]=='Y'))
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }else{
    for(i=0;i<l;i++)
    {
        if((a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U')||(a[i]=='Y'))
        {
            b[p]=i;
            p++;
        }
    }
    int q=0;
    int c[1000];
   
    for(i=0;i<p;i++)
    {
        if(i==(p-1)){
                if(p==1){
                    c[q]=b[i]+1;
            q++;
            c[q]=l-b[i];
            q++;
                }{
            c[q]=b[i]-b[i-1];
            q++;
            c[q]=l-b[i];
            q++;
                }
        }

        else if(i==0)
        {
            c[q]=b[i]+1;
            q++;
        }
        else{
            c[q]=b[i]-b[i-1];
            q++;
        }
    }
    if(p!=0)
    {sort(c,c+q);

    cout<<c[q-1]<<endl;
    }
    else{
        cout<<l+1<<endl;
    }
    }
    return 0;
}
