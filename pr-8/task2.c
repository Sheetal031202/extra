#include <stdio.h>

int cube(int *a)
{
    return *a * *a * *a;
}


void main()
{
    int row, col;

    printf("row size:");
    scanf("%d", &row);

    printf("row size:");
    scanf("%d", &col);

    int a[row][col];
    int k = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enetr %d element:", k);
            scanf("%d", &a[i][j]);
            k++;
        }
    }

    printf("\n\n array \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n cube of array\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t ", cube(&a[i][j]));
        }
        printf("\n");
    }
}