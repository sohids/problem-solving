#include <stdio.h>
#include <string.h>

double generateOneDigit(int n)
{
    double digit = n;
    while(n>=10)
    {
        digit = 0;
        while(n!= 0)
        {
            digit += n%10;
            n = n/10;
        }
        n = digit;
    }
    return digit;
}

int main()
{
    char name1[26];
    char name2[26];

    int i, j;

    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);


    while(gets(name1) && gets(name2))
    {
        int firstStr = 0;
        int secondStr = 0;
        for(i = 0; i<strlen(name1); i++)
        {
            if(name1[i]>='a' && name1[i]<='z')
            {
                firstStr += (name1[i]-'a')+1;
            }
            else if(name1[i]>='A' && name1[i]<='Z')
            {
                firstStr += (name1[i]-'A')+1;
            }
        }

        for(i = 0; i<strlen(name2); i++)
        {
            if(name2[i]>='a' && name2[i]<='z')
            {
                secondStr += (name2[i]-'a')+1;
            }
            else if(name2[i]>='A' && name2[i]<='Z')
            {
                secondStr += (name2[i]-'A')+1;
            }
        }

        double firstNumber = generateOneDigit(firstStr);
        double secondNumber = generateOneDigit(secondStr);

        if(secondNumber>firstNumber)
        {
            int temp = secondNumber;
            secondNumber = firstNumber;
            firstNumber = temp;
        }

        printf("%0.2lf %%\n", (secondNumber*100)/firstNumber);

    }
    return 0;

}
