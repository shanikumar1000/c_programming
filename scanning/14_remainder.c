#include <stdio.h>
int main()
{
    int num_1, num_2, remainder;
    printf("Enter number 1:");
    scanf("%d", &num_1);
    printf("Enter number 2:");
    scanf("%d", &num_2);

    remainder = num_1 % num_2;

    printf("The remainder of %d divided by %d is : %d\n", num_1, num_2, remainder);
    return 0;
}