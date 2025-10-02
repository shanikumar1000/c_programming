#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number 'a' : ");
    scanf("%d", &a);
    printf("Enter number 'b' : ");
    scanf("%d", &b);
    printf("Enter number 'c' : ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("a = %d is the largest nummber.", a);
    }
    else if (b >= a && b >= c)
    {
        printf("b = %d is the largest number.", b);
    }
    else
    {
        printf("c = %d is the largest number.", c);
    }
}
