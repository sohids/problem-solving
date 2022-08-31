#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 2000
#define INPUT  freopen("input.txt","r", stdin)
#define OUTPUT freopen("output.txt","w", stdout)
typedef  long long int ll;
using namespace std;
 
 
int main()
{
    int tc, i, students, len, wid, height,j, findsmall, findbig;
    string findsmallname, findbigname;
    string names[1000];
    cin>>tc;
 
    for(i= 1;i<=tc;i++)
    {
        findsmall= 5000000;
        findbig = 0;
        cin>>students;
        for(j= 0;j<students;j++)
        {
            cin>>names[j]>>len>>wid>>height;
            int total= len*wid*height;
            if(total<findsmall)
            {
                findsmall= total;
                findsmallname= names[j];
                //printf("Finding small\n");;
            }
             if(total>findbig)
            {
                findbig= total;
                findbigname = names[j];
              //  printf("Finding big \n");
            }
     //printf("%d %d\n", findbig, findsmall);
 
        }
 
        if(findbig!= findsmall)
        cout<<"Case"<<" "<<i<<": "<<findbigname<<" took chocolate from " <<findsmallname<<endl;
        else
           cout<<"Case"<<" "<<i<<": "<<"no thief"<<endl;
    }
 
 
 
 
}
 