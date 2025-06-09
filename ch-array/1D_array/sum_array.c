#include <stdio.h>

main()
{

    int size;
    printf("enter size of array\n");
    scanf("%d", &size);

    int a[size];
    int  sum=0;
    for (int i = 0; i < size; i++)
    {
                printf(" enter value %d\t", i+1);
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }

    
    printf("\n\narray\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n\nsum of array is %d\n",sum);

    float avg=(float)sum/size;
    printf("\n\average of array is %.2f",avg);


}

