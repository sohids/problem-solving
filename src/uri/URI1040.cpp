#include <stdio.h>

int main()
{
    double N1,N2,N3,N4, Total,secondNum;
    scanf("%lf%lf%lf%lf", &N1, &N2, &N3, &N4);
    Total = (((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1));

    printf("Media: %0.1lf\n", Total);
    if(Total>=7)
        printf("Aluno aprovado.\n");
    else if(Total<5)
        printf("Aluno reprovado.\n");

    else if(Total>=5 && Total<=6.6){
        printf("Aluno em exame.\n");
        scanf("%lf", &secondNum);
        printf("Nota do exame: %0.1lf\n", secondNum);
        Total = (Total+secondNum)/2;

        if(Total>=5)
            printf("Aluno aprovado.\n");
        else if(Total<=4.9)
            printf("Aluno reprovado.\n");

        printf("Media final: %0.1lf\n", Total);

    }








    return 0;
}
