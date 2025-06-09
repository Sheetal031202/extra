#include <stdio.h>

main()
{

    int a[5] = {1, 2, 3, 4, 5};
    int number;

    printf("enter numver\n");
    scanf("%d", &number);

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; i++)
        {
            if(a[i]+a[j]==number)
            {
                printf("%d+%d=%d\n",a[i],a[j],number);
            }
        }
    }
}