#include<stdio.h>
#include<conio.h>


main()
{                float area,base,hight;


	    clrscr();
	    printf("Q.3 write a program to find the area of a triangle?\n");
	      printf("enter base:");
	      scanf("%f",&base);
	      printf("enter hight:");
	      scanf("%f",&hight);
	      area=0.5*base*hight;
	      printf("area of triangle=%f",area);

	  getch();
}