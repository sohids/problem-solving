#include <stdio.h>
 
int main() {
 
   int my_p,lift_p,arrival,total,i,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
   scanf("%d %d",&my_p,&lift_p);
   if(my_p<lift_p)
     arrival= (lift_p-my_p)*4;
   else
     arrival= (my_p-lift_p)*4;
   total= arrival+(my_p*4)+19;
 
 
 
   printf("Case %d: %d\n",i,total);
   }
 
return 0;
}
 