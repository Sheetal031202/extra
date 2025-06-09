#include <stdio.h>

// camme case means hello world output helloWord
main()
{

    char name[100];
    printf("enter name\n");
    scanf("%[^\n]", &name);

    printf("name\t %s\n", name);

    for (int i = 0; name[i] != NULL; i++)
    {
        if (name[i] == 32)
        {
            name[i] = name[i + 1];
            if (name[i] >= 97 && name[i] <= 122)
            {
                name[i] = name[i] - 32;
            }
        }
        else if (name[i] == 0)
        {
            if (name[i] <= 65 && name[i] >= 90)
            {
                name[i] = name[i] + 32;
            }
        }
    }
    printf("\n\camelCase  \t:%s", name);
}