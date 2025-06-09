#include <stdio.h>

main()
{

    char name[100];
    printf("enter name\n");
    scanf("%[^\n]", &name);

    printf("hello %s\n", name);

    int len=0 ;
    for (int i = 0; name[i] != NULL; i++)
    {
        len=len+1;;
    }
    printf("\n\nlength is %d", len);
}