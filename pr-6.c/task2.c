#include <stdio.h>

main()
{

    char name[100];
    printf("enter name\n");
    scanf("%[^\n]", &name);
    printf(" name\t :%s", name);


int count;

    for (int i = 0; name[i] != 0; i++)
    {
            count=1;

        for (int j = i + 1; name[j] != 0; j++)
        {
            if(name[i]==name[j]){
                count=count+1;
            }
            
        }
    }


           printf(" \nchar %c = %d\n",name[3],count);
    
}