#include <stdio.h>
void main()
{

    FILE *fp1;
    fp1 = fopen("even.txt", "a");

    FILE *fp2;
    fp2 = fopen("odd.txt", "a");

    if (fp1 != NULL || fp2 != NULL)
    {

        for (int i = 50; i <= 70; i++)
        {
            if (i % 2 == 0)
            {
                fprintf(fp1, "%d\n", i);
            }
            else
            {
                fprintf(fp2, "%d\n", i);
            }
        }
    }
    else
    {
        printf("not open");
    }
}