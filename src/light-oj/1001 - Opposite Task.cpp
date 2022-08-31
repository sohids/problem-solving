#include <stdio.h>
 
int main()
{
 
    int n,a,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int x=0;
        scanf("%d",&a);
        if(a%2==0)
            printf("%d %d\n",a/2,a/2);
        else
            printf("%d %d\n",x,a);
    }
 
return 0;
}
 