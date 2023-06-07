#include <stdio.h>
#include <stdlib.h>

//----------------------------------------------------------------
// smallest element in array without using pointer by sectumsempra07
//----------------------------------------------------------------
int main()
{
    int i;
    int *arr;
    int size;

    // Size of the array
    printf("Enter size of elements:");
    scanf("%d", &size);

    //  Memory allocates dynamically using malloc()
    arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d integer numbers\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int small = arr[0];

    for (i = 1; i < size; i++)
    {
        if (*(arr + i) < small)
            small = *(arr + i);
    }

    printf("Smallest Element In The Array: %d\n", small);

    return 0;
}