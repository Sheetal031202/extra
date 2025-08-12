#include <stdio.h>
#include <string.h>
main()
{

    char name[50];
    printf("enter name \n");
    scanf("%[^\n]", &name);

    int len = strlen(name);
    printf(" %d\n", len);
    for (int i = 0; i < len; i++)
    {
        int count = 1;

        for (int j = i + 1; j < len; j++)
        {
            if (name[i] == name[j])
            {
                count++;
                name[j] = '\0';
            }
        }
        if (name[i] != 0)
        {
            printf("%c  %d\n", name[i], count);
        }
    }
}