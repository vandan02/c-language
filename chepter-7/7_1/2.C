      #include<stdio.h>
#include<conio.h>



main()
{              //find a positive and nagetive number
	       int a;
	       clrscr();
	       printf("add a number :");
	       scanf("%d",&a);
	       if(a>0)
	       {
		     printf("%d this is a positive number",a);
	       }

	       else
	       {
		 printf("this is a nagetive number");
	       }
	       getch();
  }