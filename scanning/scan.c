#include <stdio.h>
int main()
{
    int num_1, num_2, result;
    printf("Enter number 1:");
    scanf("%d", &num_1);
    printf("Enter number 2:");
    scanf("%d", &num_2);

    result = num_1 + num_2;
    printf("The result is %d", result);

    return 0;
}