#include <stdio.h>
int main()
{
    int i = 1, num = 2;

    printf("The first 20 even numbers are:\n");
    while (i <= 20)
    {
        printf("%d\n", num);
        num = num + 2;
        i++;
    }
    return 0;
}