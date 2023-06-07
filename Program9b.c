#include <stdio.h>
#include <stdlib.h>

//----------------------------------------------------------------
// reverse array using pointer by sectumsempra07
//----------------------------------------------------------------
int main()
{
    int i;
    int *a, *b;
    int size;

    // Size of the array
    printf("Enter size of elements:");
    scanf("%d", &size);

    //  Memory allocates dynamically using malloc()
    a = (int *)malloc(size * sizeof(int));
    b = (int *)malloc(size * sizeof(int));

    printf("Enter %d integer numbers\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for (i = size - 1; i >= 0; i--)
    {
        *(b + i) = *(a + (size - i - 1));
    }
    for (i = 0; i < size; i++)
        printf("%d ", *(b + i));

    return 0;
}