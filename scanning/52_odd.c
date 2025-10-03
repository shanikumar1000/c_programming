#include <stdio.h>
int main()
{
    int i;
    printf("The first 20 even numbers are:\n");
    for (i = 1; i <= 20; i++)

    {
        printf("%d\n", (i * 2) - 1);
    }
    return 0;
}