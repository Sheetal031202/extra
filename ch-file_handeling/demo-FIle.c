#include<stdio.h>

void main(){


     //file pointer
     //1 
      FILE *fp;

//2
// mode w,r,a
     fp= fopen("C:\\Users\\HP\\Desktop\\d.txt","r");

     //3
      if(fp !=0){
        printf("file open\n\n");
        // fprintf(fp,"hello sh ");


        char msg[20];
        fscanf(fp,"%[^\b]",&msg);
        // terminal ma printf karava
        printf("\n%s",msg);

      }else{
                printf("file not  open");

      }
}