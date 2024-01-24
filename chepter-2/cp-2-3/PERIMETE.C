#include<stdio.h>
#include<conio.h>
#define pi 3.14


main()
{                float radius,perimeter,area;


	    clrscr();
	    printf("Q.4 write a program to find the perimeter of the circle?\n");
	      printf("enter radius:" );
	      scanf("%f",&radius);
	      perimeter=2*pi*radius;
	      printf("perimeter of the circae:%0.4f",perimeter);

	      area=pi*radius*radius;
	      printf("\narea of circle:%04f",area);




	  getch();
}