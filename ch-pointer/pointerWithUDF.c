#include<stdio.h>


void swap(int *a,int *b){
 int c=*a;
 *a=*b;
 *b=c;
}




main(){
int q,w;

printf("first:");
scanf("%d",&q);

printf("second:");
scanf("%d",&w);
swap(&q,&w);
printf("%d %d swap:",q,w);
}