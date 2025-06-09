#include<stdio.h>

main()
{
    char name[100];
printf("enter your name\n");
scanf("%[^\n]",&name);

printf(" name\t: %s\n",name);

for(int i=0;name[i]!=NULL;i++)
{
    if(name[i]>=65 && name[i]<=90){
        name[i]=name[i]+32;
    }
}
printf("  lower CASE\t: %s",name);

}