#include <stdio.h>
int main()
{
    float num_1, num_2, result;
    printf("Enter Number 1:");
    scanf("%f", &num_1);
    printf("Enter Number 2:");
    scanf("%f", &num_2);

    result = num_1 / num_2;

    printf("The result is: %.2f", result);
    return 0;
}