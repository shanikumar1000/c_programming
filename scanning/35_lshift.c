#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    int result = num << 2;
    printf("The result after left shifting the number by 2 is : %d\n", result);
    return 0;
}