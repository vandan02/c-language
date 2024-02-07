#include<stdio.h>
#include<conio.h>
main()
{

    int n,frist,last,sum;
     clrscr();
	printf("enter your number:");
	scanf("%d",&n);
	last=n%10;
	frist=n;
     while(frist>=10)
     {
       frist=frist/10;
     }
     sum=frist+last;
     printf("sum of last and frist number %d",sum);

     getch();
}