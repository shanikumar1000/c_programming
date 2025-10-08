#include<stdio.h>
/**
 * This is the main entry of the code. This function will the whether the number is prime or not.
 * 
 * @return: 0.
 */
int main()
{
    /**
    * set the first number to 0 and second to 1 */
    int n, a=0, b=1, next, i;
    printf("Enter the value of fibonacci series required:");
    scanf("%d", &n);

    printf("The first %d terms for the fibonacci series are:\n", n);
     /**
     * to set the range for the count for the series
     */

    for(i=0; i<n; i++) {
        printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;

}