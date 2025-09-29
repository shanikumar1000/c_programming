#include <stdio.h>
int main()
{
    int no1, no2, result;
    printf("Enter number 1:");
    scanf("%d", &no1);
    printf("Enter number 2:");
    scanf("%d", &no2);

    result = no1 + no2;
    printf("The result is %d", result);

    return 0;
}