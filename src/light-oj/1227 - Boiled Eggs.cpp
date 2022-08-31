#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 2000
#define INPUT  freopen("input.txt","r", stdin)
#define OUTPUT freopen("output.txt","w", stdout)
typedef  long long int ll;
using namespace std;
 
 
int main()
{
    int tc,n, p,q,grams[50], total, count, i, val, j;
 
    cin>>tc;
    for(i= 1;i<=tc;i++)
    {
        total= count=  0;
        cin>>n>>p>>q;
 
        if(p<n) val= p;
        else val= n;
 
        for(j= 0;j<n;j++)
            cin>>grams[j];
 
        for(j= 0;j<n;j++)
        {
            total+= grams[j];
            if(j<val && total<=q)
                count++;
            else
                break;
        }
 
        printf("Case %d: %d\n", i, count);
 
    }
 
 
 
 
}
 