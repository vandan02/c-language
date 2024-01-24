#include<stdio.h>
#include<conio.h>


main()
{                float p,r,t,si;


	    clrscr();
	    printf("Q.4 write a program to find simple intrest?\n");
	      printf("enter pricipal:");
	      scanf("%f",&p);
	      printf("enter rate of intrust:");
	      scanf("%f",&r);
	      printf("enter time:");
	      scanf("%f",&t);
	      si=(p*r*t)/100;
	      printf("simple intrust=%f",si);


	  getch();
}