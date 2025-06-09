#include<stdio.h>
// toggle case means capital hoy te small thay small hoy te capital
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
    else if(name[i]>=65 && name[i]<=90){
        name[i]=name[i]+32;
    }
}
printf("  toggle CASE\t: %s",name);

}