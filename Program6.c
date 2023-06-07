#include <stdio.h>

//----------------------------------------------------------------
// first 25 numbers of fibonacci sequence by sectumsempra07
//----------------------------------------------------------------
int fibo(int num)
{
    if (num == 0)

        return 0;

    else if (num == 1)

        return 1;

    else

        return (fibo(num - 1) + fibo(num - 2));
}
void main()
{
    int num = 25, c = 0, i;

    printf("Fibonacci Series:\n");

    for (i = 1; i <= num; i++)
    {
        printf("%d  ", fibo(c));
        c++;
    }
}
