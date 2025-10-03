/*#include <stdio.h>
int main()
{
    int i;
    printf("The numbers which are not divisible by 5 are:\n");
    for (i = 1; i <= 25; i++)
    {
        if (i % 5 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}*/
#include <stdio.h>
int main()
{
    int num = 1, i = 0;
    printf("The first 20 numbers which are not divisible by 5 are:\n");
    while (i < 20)
    {
        if (num % 5 != 0)
        {
            printf("%d\n", num);
            i++;
        }
        num++;
    }
    return 0;
}