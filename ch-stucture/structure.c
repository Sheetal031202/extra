#include <stdio.h>

struct emp
{
    char name[20];
    int age;
};

void main()
{

    int size;
    printf("size=");
    scanf("%d", &size);
    struct emp obj[size];

    for (int i = 0; i < size; i++)
    {
        fflush(stdin);
        printf("name :");
        scanf("%[^\n]", &obj[i].name);
        printf("age :");
        scanf("%d", &obj[i].age);
    }
    printf("\n\noutpr\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s", obj[i].name);
        printf("%d", obj[i].age);
    }
}