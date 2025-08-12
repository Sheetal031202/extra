#include <stdio.h>

main()
{

    char mail[20], psw[20];

    FILE *fp;
    fp = fopen("login.txt", "a");

    if (fp != NULL)
    {
        printf("Enter mail:");
        scanf("%s", &mail);
        printf("Enter password:");
        scanf("%s", &psw);

        fprintf(fp, "mail :%s\n", mail);
        fprintf(fp, "Password :%s\n", psw);
        fprintf(fp, "-------------------------------\n\n");

        fclose(fp);
    }
    else
    {
        printf("not open");
    }
}