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

    printf("enter matrix element %d\n", row * col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter value :");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n array is\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n diagonal is\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==0||j==0||i==col-1||j==row-1)
            {
                printf("%d", a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}