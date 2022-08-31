#include <stdio.h>
#include <string.h>
int main()
{
    int counter = 0, T, i;
    char str[80];

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &T);
    while(T--)
    {
        int counter = 0, sum = 0;
        scanf("%s", &str);

        for(i = 0; i<strlen(str); i++){
            counter++;
            if(str[i] == 'X'){
                 counter = 0;
            }
           sum+= counter;
        } 
        printf("%d\n", sum);               
    }
    return 0;
}
