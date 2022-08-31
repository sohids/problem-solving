#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    int number, workHours;
    double amount;

    cin>>number>>workHours>>amount;

    double salary = amount*workHours;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %0.2lf\n", salary);


    return 0;
}
