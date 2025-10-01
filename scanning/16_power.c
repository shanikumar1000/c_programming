#include <stdio.h>
#include <math.h>
int main()
{
    double num_1, power;
    printf("Enter the number to calculate its square:");
    scanf("%lf", &num_1);
    power = pow(num_1, 2);

    printf("The square of %lf is : %lf\n", num_1, power);
    return 0;
}