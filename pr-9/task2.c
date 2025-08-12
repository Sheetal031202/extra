#include <stdio.h>

struct stu
{
    int roll;
    char name[20];
    int chem;
    int math;
    int phy;
};

void main()
{

    int stuSize;
    printf("How many student?: ");
    scanf("%d", &stuSize);

    struct stu obj[stuSize];
    for (int i = 0; i < stuSize; i++)
    {
        printf("Enter details of %d student:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &obj[i].roll);
        fflush(stdin);
        printf("Name => ");
        scanf("%[^\n]", &obj[i].name);
        printf("Chemisty Marks => ");
        scanf("%d", &obj[i].chem);
        printf("mathematics Marks => ");
        scanf("%d", &obj[i].math);
        printf("Physics Marks => ");
        scanf("%d", &obj[i].phy);
    }

    printf("\n\nhere is your result\n\n");
    // float per= (float)sum/4;

    for (int i = 0; i < stuSize; i++)
    {
        printf("--------------------------------------------------------------------------------\n");

        printf("|   %s (%d)  \n", obj[i].name, obj[i].roll);
        printf("|   Chemisty Marks => %d  \n", obj[i].chem);
        printf("|   Mathematics Marks => %d  \n", obj[i].math);
        printf("|   Physics Marks => %d \n", obj[i].phy);
        printf("|   Total => %d  \n", obj[i].chem + obj[i].math + obj[i].phy);
        float per = (float)(obj[i].chem + obj[i].math + obj[i].phy) / 3;
        printf("|   per => %.2f  \n", per);

        printf("--------------------------------------------------------------------------------\n");
    }
}