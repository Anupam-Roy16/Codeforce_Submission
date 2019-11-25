#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char f[15];
    char a[]="Icosahedron";
    char b[]="Cube";
    char p[]="Tetrahedron";
    char d[]="Dodecahedron";
    char e[]="Octahedron";
    scanf("%d\n",&n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        gets(f);
        if(strcmp(a,f)==0)
        {
            c=c+20;
        }
        else if(strcmp(f,b)==0)
        {
            c=c+6;

        }
        else if(strcmp(p,f)==0)
        {
            c=c+4;
        }
        else if(strcmp(d,f)==0)
                {
                    c=c+12;
                }
         else if(strcmp(e,f)==0)
         {
             c=c+8;
         }
    }
    cout<<c<<"\n";
    return 0;
}
