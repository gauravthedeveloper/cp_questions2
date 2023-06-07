#include <stdio.h>

//----------------------------------------------------------------
// a pattern by sectumsempra07
//----------------------------------------------------------------
int main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    int flag = 1;
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", flag);
            if (flag)
                flag = 0;
            else
                flag = 1;
        }
        printf("\n");
    }

    return 0;
}