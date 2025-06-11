#include<stdio.h>
main(){
char name[20];

printf("enetr name:");
scanf("%[^\n]",&name);
char *ptr[20];
ptr[20]=&name[20];

printf("%s",*ptr);

}