#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    printf(" scanned number divisible by 2 or 4 or 5\n");
    if (num % 2 == 0 || num % 4 == 0 || num % 5 == 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}