#include <stdio.h>
int main()
{
    long long int n;
    int i,t;
 
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        int count=0;
    scanf("%d",&n);
    while(n>=1)
    {
        if(n%2==1 || n==1)
            count++;
        n=n/2;
    }
if(count%2==1)
            printf("Case %d: odd\n",i);
        else
            printf("Case %d: even\n",i);
 
    }
    return 0;
}