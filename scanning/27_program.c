#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    printf(" scanned number is greater than 100 & less than 200\n");
    if (100 < num && num < 200)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}