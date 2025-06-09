#include <stdio.h>

// title case means only starting character is capital

main()
{
    char name[100];
    printf("enter your name\n");
    scanf("%[^\n]", &name);

    printf(" name\t: %s\n", name);

    for (int i = 0; name[i] != NULL; i++)
    {
        if (name[0] >= 97 && name[0] <= 122)
        {
            name[i] = name[i] - 32;
        }
        else if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
    }
            printf("  title CASE\t: %s", name);

}