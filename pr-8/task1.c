#include<stdio.h>
#include<string.h>


void main(){

    char name[20];

    printf("enter name:");
    scanf("%[^\n]",&name);

     int len=strlen(name);
    int *ptr;
    ptr=&len;
    printf("lengh of %s is %d",name, *ptr);

}