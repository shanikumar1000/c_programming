#include<stdio.h>
int main()
{
    /**
    * Set the value of sum = 0 to add the divisors to the sum. */
    int n, i, sum = 0;

    printf("Enter a Number to check whether it is perfect or not:");
    scanf("%d", &n);
    /**
    * Set maximum value of i to n/2 because no divisor of n is greater than n/2. */
    for(i = 1; i <= n/2; i++){
        /**
        * If i is the complete divisor add it to the sum */
        if (n % i == 0){
            sum = sum + i;
        }
    }
    /**
    if sum and number are equal print the result */
    if (sum == n) {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    }
    return 0;
}