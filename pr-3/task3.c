#include<stdio.h>
// #include<conio.h>

main(){
     int n,first,sum,last;
//  clrscr();
  printf("Enter any number\n");
 scanf("%d",&n);

 first=n;
 last=n%10;

 while(first>9){
 first=first/10;
  }

 printf("\nsum of first and last digits are =%d",first+last);

//  getch();
}