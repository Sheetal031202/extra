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

    printf("\n\n here is transpose array\n"); // print array
    for (int i = 0; i < col; i++)
    {

        for (int j = 0; j < row; j++)
        {
            printf("%d", a[j][i]);
        }
        printf("\n");
    }
}