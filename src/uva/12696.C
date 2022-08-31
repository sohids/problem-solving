#include <stdio.h>

int main()
{
    int T;
    double length, width, depth, weight;

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &T);
    
    int counter = 0;
    for (int i = 0; i < T; i++)
    {
        scanf("%lf%lf%lf%lf", &length,&width, &depth, &weight);
        double sum = length+width+depth;
       if(((length<=56 && width<=45 && depth<=25) || sum<=125) && weight<=7){
           printf("1\n");
           counter++;
       }
       else{
           printf("0\n");
       }
    }
    printf("%d\n", counter);
    return 0;
}
