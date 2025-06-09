#include<stdio.h>
main(){

int a[10]={10,20,4,6,15,45,88,48,68,58};

for(int i=0;i<10;i++)
{
    if(i==4||i==6){
        continue;
    }
 else{
    printf("%d\t",a[i]);
 }   
}
}