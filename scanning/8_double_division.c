#include <stdio.h>
int main()
{
    double num_1, num_2, result;
    printf("Enter Number 1:");
    scanf("%lf", &num_1);
    printf("Enter Number 2:");
    scanf("%lf", &num_2);

    result = num_1 / num_2;

    printf("The result is: %.2lf", result);
    return 0;
}