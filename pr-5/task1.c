#include <stdio.h>

main()
{

    int size;

    printf("enter size\n");
    scanf("%d", &size);

    int a[size];

   
    for (int i = 0; i < size; i++)
    {
          printf("enter %d value \n",i+1);
        scanf("%d", &a[i]);
    }

 printf("here is your values\n");
    for (int i = 0; i < size; i++)
    {
        printf("  %d\t", a[i]);
    }

printf(" \n\nnegetive values\n");
    for (int i = 0; i < size; i++)
    {
        if(a[i]<0){
            printf(" youe negative number is %d ", a[i]);
        }
    }

}