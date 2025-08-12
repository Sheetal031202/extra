#include <stdio.h>


main()
{

 

    char name[50];
    printf("enter name \n");
    scanf("%[^\n]", &name);

    int len = 0;
    for (int i = 0; name[i] != NULL; i++)
    {
        len = len + 1;
    }

    char reName[20];
    int i = 0;
    for (int j = len - 1; j >= 0; j--)
    {
        reName[i] = name[j];
        i++;
    }

    reName[len]='\0';
    printf("name\t:%s\n", name);
    printf("Rename\t: %s\n", reName);

    for (int i = 0; name[i] != 0; i++)
    {
        if (name[i] == reName[i])
        {
            printf("it is palindrom");
            break;
        }
        else
        {
            printf("it is not  palindrom");
            break;
        }
    }
}