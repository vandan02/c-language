#include<stdio.h>
#include<conio.h>
main()
{
    long int n;
    int count=0;
     clrscr();
	printf("enter your number:");
	scanf("%ld",&n);
     while(n!=0)
     {
       count++;
       n=n/10;
     }
     printf("total digit of number is:%d",count);

     getch();
}