#include <stdio.h>
#include <math.h>
int main()
{
    double num_1, root;
    printf("Enter the number to calculate its square root:");
    scanf("%lf", &num_1);
    root = sqrt(num_1);

    printf("The square of %.2lf is : %.2lf\n", num_1, root);
    return 0;
}