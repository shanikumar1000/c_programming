#include <stdio.h>
int main()
{
    int num_1, num_2;
    printf("Enter number 1:");
    scanf("%d", &num_1);
    printf("Enter number 2:");
    scanf("%d", &num_2);

    num_1 = num_1 + num_2;
    num_2 = num_1 - num_2;
    num_1 = num_1 - num_2;

    printf("After swapping number 1 is : %d\n", num_1);
    printf("After swapping number 2 is : %d\n", num_2);
    return 0;
}