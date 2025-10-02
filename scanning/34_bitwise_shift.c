#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    int result = num >> 3;
    printf("The result after right shifting the number by 3 is : %d\n", result);
    return 0;
}