#include<stdio.h>
// #include<conio.h>
main(){
 int a,h,d,tax,t;
//  clrscr();
   printf("enter your salary");
   scanf("%d",&a);

   printf("salary\t: %d\n",a);

   h=(a*10)/100;
   printf("HRA\t: %d\n",h);

   d=(a*5)/100;
   printf("DA\t: %d\n",d);

    tax=(a*8)/100;
   printf("DA\t: %d\n",tax);

   t=a+h+d+tax;
   printf(" gross salary\t: %ld\n",t);

//  getch();
}