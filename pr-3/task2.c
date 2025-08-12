#include<stdio.h>
// #include<conio.h>

main(){
      int number,i,digit=0;
// clrscr();

      printf("Enter your digit\n");
      scanf("%d",&number);

      for(i=number;i!=0;i=i/10){
	 digit=digit+1;
      }

      printf("digits are = %d\n",digit);
// getch();
}