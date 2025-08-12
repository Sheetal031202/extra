#include<stdio.h>
// #include<conio.h>
main()
{
char grade;
int marks;
// clrscr();
     printf("Enter your Marks\n");
     scanf("%d",&marks);

   //ternary
     (marks>= 91 && marks <=100)?grade='A'
     : (marks>= 81 && marks <=90)?grade='B'
	:(marks>= 71 && marks <=80)?grade='C'
	  :(marks>= 61 && marks <=70)?grade='D'
	   :(marks>= 51 && marks <=60)?grade='E'
	      :(grade='F') ;
     //switch
     switch(grade)  {
     case 'A':{
       printf("Excellent Work\nyour grade is %c\n",grade);
	      }
       break;

     case 'B':{
     printf("Well done\nyour grade is %c\n",grade);
	      }
     break;

      case 'C':{
     printf("Well done\nyour grade is %c\n",grade);
	      }
     break;

      case 'D':{
     printf("Well done\nyour grade is %c\n",grade);
	      }
     break;

      case 'E':{
     printf("Well done\nyour grade is %c\n",grade);
	      }
     break;

     default:{
       printf("Sorry you are fail\n");
	       }
		   }


     //if conditon
     if(grade=='F'){
     printf("Sorry you are not eligible for the next level");
     }
     else{
     printf("congratulation you are eligible for the next level");
     }

//   getch();
}