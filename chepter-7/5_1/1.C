#include<stdio.h>
#include<conio.h>


main()
{
	      //find a smallest number
	       int a,b;
	       clrscr();
	       printf("add a number one:");
	       scanf("%d",&a);
		printf("add a number two:");
	       scanf("%d",&b);
	       if(a<b)
	       {
		     printf("%d is smallest number:",a);
	       }
	       else if(a>b)
	       {
		     printf("%d is smallest number:",b);

	       }
	       else
	       {
		 printf("do not type same number enter deffrent number");
	       }
	       getch();


	}








