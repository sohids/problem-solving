#include <stdio.h>
#include <math.h>
 
int main() {
    double r;
    int n,i;
    scanf("%d",&n);
 
    for(i=1;i<=n;i++){
        scanf("%lf",&r);
        double square= 2*r;
        square= square*square;
 
        printf("Case %d: %0.2lf\n",i,square- (2*acos(0)*(r*r)));;
    }
 
 
return 0;
}
 