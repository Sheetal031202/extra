#include<stdio.h>

main()
{
    char name[100];
printf("enter your name\n");
scanf("%[^\n]",&name);

printf(" name\t: %s\n",name);

for(int i=0;name[i]!=NULL;i++)
{
    if(name[i]>=97 && name[i]<=122){
        name[i]=name[i]-32;
    }
}
printf("  UPPER CASE\t: %s",name);

}