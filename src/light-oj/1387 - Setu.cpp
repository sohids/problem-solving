#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 2000
#define INPUT  freopen("input.txt","r", stdin)
#define OUTPUT freopen("output.txt","w", stdout)
typedef  long long int ll;
using namespace std;
 
 
int main()
{
    int tc, i, n, total, j, money;
    char status[10];
 
   // INPUT;
   // OUTPUT;
    cin>>tc;
    for(i= 1;i<=tc;i++)
    {
        total= 0;
 
        cin>>n;
        printf("Case %d:\n", i);
        for(j= 1;j<=n;j++)
        {
            scanf("%s", status);
            if(strcmp(status, "donate") == 0)
            {
                scanf("%d", &money);
                total+= money;
            }
            else
                printf("%d\n",total);
 
        }
    }
 
 
    return 0;
}