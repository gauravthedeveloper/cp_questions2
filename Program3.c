#include <stdio.h>
//----------------------------------------------------------------
//  a program to print  all Prime numbers between 1 to 100 by sectumsempra07
//----------------------------------------------------------------
int main()
{
    int count_of_factors = 0, n = 0, i = 1, j = 1;
    while (i <= 100)
    {
        j = 1;
        count_of_factors = 0;
        while (j <= i)
        {
            if (i % j == 0)
                count_of_factors++;
            j++;
        }
        if (count_of_factors == 2)
        {
            printf("%d ", i);
            n++;
        }
        i++;
    }
}