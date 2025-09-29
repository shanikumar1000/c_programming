#include <stdio.h>
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
float divide(int x, int y);

int main()
{
    int num_1, num_2;
    printf("Enter first number:");
    scanf("%d", &num_1);
    printf("Enter second number:");
    scanf("%d", &num_2);

    printf("The sum is %d\n", add(num_1, num_2));
    printf("The difference is %d\n", subtract(num_1, num_2));
    printf("The product is %d\n", multiply(num_1, num_2));
    printf("The division is %.2f\n", divide(num_1, num_2));
    return 0;
}

int add(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
float divide(int x, int y)
{
    return (float)x / y;
}