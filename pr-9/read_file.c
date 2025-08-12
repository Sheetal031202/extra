#include <stdio.h>
void main()
{

    FILE *fp1;
    fp1 = fopen("even.txt", "r");
    FILE *fp2;
    fp2 = fopen("odd.txt", "r");

    if (fp1 != NULL || fp2 != NULL)
    {
        int a;
        printf("enter 1 =even file\n enter 2=odd file");
        scanf("%d", &a);
        int evn, od;
        if (a == 1)
        {
            fscanf(fp1, "%d", &evn);
            printf("%d\n", evn);
        }
        else
        {
            fscanf(fp2, "%d", &od);
            printf("%d\n", od);
    
        }
        fclose(fp1);
    }

    else
    {
        printf("not open");
    }
}