#include <stdio.h>

void main()
{

    FILE *fp;
    fp = fopen("login.txt", "r");

    if (fp != NULL)
    {
        char msg[20];

        fscanf(fp, "%[^\b]", &msg);
        printf("%s", msg);

        fclose(fp);
    }
    else
    {
        printf("file is not open");
    }
}