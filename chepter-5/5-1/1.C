#include<stdio.h>
#include<conio.h>
main()
{
     int A=15,a=10,b=20;
     clrscr();

     printf("Q1 Create a program to print increment an decrement.\n\n");

     printf("a=15\nincrement= %d\n",++A);
     printf("a=15\nDecrement= %d\n\n\n",--A,--A);

     printf("Q2 Create a program and use arithmetic operator.\n\n");

     printf("10+20=%d\n",a+b);
     printf("10-20=%d\n",b-a);
     printf("10*20=%d\n",a*b);
     printf("10/20=%d\n",b/a);
     printf("10%20=%d\n",b%a);

     getch();

}