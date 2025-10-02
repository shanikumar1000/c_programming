#include <stdio.h>
int main()
{
    int num;
    printf("Enter the nummber:");
    scanf("%d", &num);

    (num > 100) ? printf("True\n") : printf("False\n");
    return 0;
}