#include <stdio.h>

main()
{

    int row;
    int col;

    printf("enter row size\n");
    scanf("%d", &row);

    printf("enter col size\n");
    scanf("%d", &col);

    int a[row][col];

    printf("enter value %d \n", row * col); // take input from user
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n here is your array\n"); // print array
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    // row input
    int rowInput;
    printf("enetr the row");
    scanf("%d", &rowInput);

    int rowSum = 0;
    for (int i = rowInput; i == rowInput; i++)
    {

        for (int j = 0; j < col; j++)
        {
            printf( "%d\t", a[i][j]);
            rowSum += a[i][j];
        }
        printf("\n");
    }
    printf("\n\nsum of row is %d:", rowSum);

    // col input

    int colInput;
    printf("\n\nenetr the column");
    scanf("%d", &colInput);

    int colSum = 0;
    for (int i = 0; i < row; i++)
    {

        for (int j = colInput; j == colInput; j++)
        {
            printf("%d", a[i][j]);
            colSum += a[i][j];
        }
        printf("\n");
    }

    printf("\n\nsum of column is %d:", colSum);
}