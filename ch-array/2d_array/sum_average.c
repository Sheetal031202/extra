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

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter value :");
            scanf("%d",&a[i][j]);
            sum = a[i][j] + sum;
        }
    }
    printf("\n\narray is\n");
for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n%d is your sum:", sum);
    printf("\n\n average is %.2f",(float)sum/(row*col));
}