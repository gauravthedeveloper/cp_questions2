#include <stdio.h>
#include <stdlib.h>

//----------------------------------------------------------------
// smallest element in array  using pointer by sectumsempra07
//----------------------------------------------------------------
int main()
{
    int i, *small;
    int *a;
    int size;

    // Size of the array
    printf("Enter size of elements:");
    scanf("%d", &size);

    //  Memory allocates dynamically using malloc()
    a = (int *)malloc(size * sizeof(int));

    printf("Enter %d integer numbers\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    small = &a[0];

    for (i = 1; i < size; i++)
    {
        if (*(a + i) < *small)
            *small = *(a + i);
    }

    printf("Smallest Element In The Array: %d\n", *small);

    return 0;
}