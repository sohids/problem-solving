#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 2000
#define INPUT  freopen("input.txt","r", stdin)
#define OUTPUT freopen("output.txt","w", stdout)
typedef  long long int ll;
using namespace std;
 
int main()
{
    int n, i, j, k, flag;
    char str1[100];
    char str2[100];
//INPUT;
//OUTPUT;
    cin>>n;
 
    for(i= 1;i<=n;i++)
    {
         flag= 1;
        scanf("%s", str1);
        int len= strlen(str1);
        k= 0;
        for(k= 0,j= --len;j>=0;j--, k++)
        {
            //printf("%c %c\n", str1[k], str1[j]);
            if(str1[k]!= str1[j])
            {
                flag= 0;
                break;
            }
        }
        if(flag == 0)
            printf("Case %d: No\n", i);
        else
            printf("Case %d: Yes\n", i);
 
    }
 
 
return 0;
 
}
 