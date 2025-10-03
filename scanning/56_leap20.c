#include <stdio.h>
int main()
{
    int num = 2000, i = 0;
    printf("The first 20 leap years from year 2000 are:\n");
    while (i < 20)
    {
        if (num % 4 == 0)
        {
            printf("%d\n", num);
            i++;
        }
        num++;
    }
    return 0;
}