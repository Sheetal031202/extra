#include <stdio.h>
main()
{

    int size;
    printf("enter size\n");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter %d value\t:", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\nactual array\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d\t", a[i]);
    }

    int b[size];
    int c[size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] == a[j])
            {
                b[i] = a[i];
            }
            else 
            {
                c[i] = a[i];
            }
        }
    }

    printf("\n\n dubblicate element array\n");

    for (int i = 0; i < size; i++)
    {
        printf(" %d\t", c[i]);
    }
}