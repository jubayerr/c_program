#include <stdio.h>

// function (add number) 7.2 (cpbook)

double add(double num1, double num2);

int main()
{
    double a, b, c;
    a = 5.5;
    b = 5.5;
    c = add(a, b);

    printf("Sum = %0.2lf\n", c);

    return 0;
}

double add(double num1, double num2)
{
    double sum;
    sum = num1 + num2;
    return sum;
}