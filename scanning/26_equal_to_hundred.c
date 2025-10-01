#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    printf("Statement : The number is not equal to 100\n");
    if (num != 100)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}