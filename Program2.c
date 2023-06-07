#include <stdio.h>
//----------------------------------------------------------------
//----------------------------------------------------------------
// a menu driven application by sectumsempra07
//   a.Factorial number
//   b.Prime or not
//   c.Odd or even
//   d.exit.
//----------------------------------------------------------------
//----------------------------------------------------------------
void factorial()
{

    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
}
void even_or_odd()
{
#include <stdio.h>

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if (num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
}
void prime()
{

    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {

        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
}
int main()
{
    int caseq;
    printf("Enter 1 for calculation of factorial of a number.\n");
    printf("Enter 2 for calculation if number is Prime or not.\n");
    printf("Enter 3 for calculation if number is Odd or Even.\n");
    scanf("%d", &caseq);

    switch (caseq)
    {
    case 1:
        factorial();
        break;
    case 2:
        prime();
        break;
    case 3:
        even_or_odd();
        break;

    default:
        break;
    }

    return 0;
}