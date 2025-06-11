#include<stdio.h>

main(){

int a[5];
int *ptr[5];


for(int i=0;i<5;i++){
        printf("enetr :");

    scanf("%d",&a[i]);
}for(int i=0;i<5;i++){
    ptr[i]=&a[i];
        printf("%d\t",*ptr[i]);
}
}