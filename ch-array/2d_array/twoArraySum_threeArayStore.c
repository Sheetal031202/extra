#include <stdio.h>

main()
{
    int row;
    int col;

    printf("enter row \n");
    scanf("%d", &row);

    printf("enter column \n");
    scanf("%d", &col);

    int a[row][col];

    printf("enter 1st  matrix element %d\n", row * col);

    // 1st metrix input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter value :");
            scanf("%d", &a[i][j]);
        }
    }
    // 2nd metrix input
    int b[row][col];

    printf("enter 2nd  matrix element %d\n", row * col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter value :");
            scanf("%d", &b[i][j]);
        }
    }
    // sum in 3rd metrix
    int c[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }


    // print 1st array
    printf("\n\n 1st array\n");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

     printf("\n\n 2st array\n");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

     printf("\n\n sum array\n");
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}