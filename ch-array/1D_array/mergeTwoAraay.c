#include <stdio.h>

main()
{

    int size1, size2;
    printf("enter size of 1st array\n");
    scanf("%d", &size1);

    printf("enter size of 2st array\n");
    scanf("%d", &size2);

    int a[size1];
    int b[size2];

    //     array one input
    for (int i = 0; i < size1; i++)
    {
        printf("array 1 value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    //     array 2 input
    for (int i = 0; i < size2; i++)
    {
        printf("array 2 value %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    //  array 3
    int c[size1 + size2];
    for (int i = 0; i < size1; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i <  size2; i++)
    {
        c[i+size1] = b[i];
    }

    printf("c rray\n\n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d\t", c[i]);
    }












}