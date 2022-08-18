#include <stdio.h>

// task 2.14 (cpBook)

int main() {

    int num1, num2, value;
    char sign;

    printf("please enter a number: ");

    scanf("%d", &num1);

    printf("please enter another number: ");

    scanf("%d", &num2);

    // double result1 = num1 + num2;
    // double result2 = num1 - num2;
    // double result3 = num1 * num2;
    // double result4 = num1 / num2;

    value = num1 + num2;
    sign = "+";
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 - num2;
    sign = "-";
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 * num2;
    sign = "*";
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 / num2;
    sign = "/";
    printf("%d %c %d = %d\n", num1, sign, num2, value);


    return 0;
}