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
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //horizont dessending

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            for (int k = j + 1; k < col; k++)
            {
                if (a[i][j] < a[i][k])
                {
                    int n = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = n;
                }
            }
        }
    }

   
    // vertical dessending

        for (int i = 0; i < row; i++)
        {

           int j=0;
            for (int k = i + 1; k < row; k++)
                {
                    if (a[i][j] < a[k][j])
                    {
                        int n = a[i][j];
                        a[i][j] = a[k][j];
                        a[k][j] = n;
                    }
                }

        }
   
        printf("\n\nmaximun number in 2d array is %d\n",a[0][0]);







}