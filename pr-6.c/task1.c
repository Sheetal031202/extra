#include <stdio.h>

main()
{

    char name[100];
    printf("enter name\n");
    scanf("%[^\n]", &name);

    int len = 0;
    for (int i = 0; name[i] != NULL; i++)
    {
        len = len + 1;
    }

    char reName[100];
    int i = 0;
    for (int j = len - 1; j >= 0; j--)
    {
        reName[i] = name[j];
        i++;
    }
    reName[len] = NULL;
    printf("name\t: %s\n", name);
    printf("rename\t: %s\n\n", reName);

    for (int i = 0; name[i] != 0; i++)
    {
        if (name[i] == reName[i])
        {
            printf(" it is palindrome");
            break;
        }
        else
        {
            printf("  it is not palindrome");
            break;
        }
    }
    // printf("  reverse name = %s \n", reName[0]);
}
