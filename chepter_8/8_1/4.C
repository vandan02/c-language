#include<stdio.h>
#include<conio.h>
      main()
      {
       //write a program n to 1  print using while loop
	      int a=1,n;

       clrscr();
		printf("enter any number:");
		scanf("%d",&n);
	      while(n>=a)
	      {
	       printf("%d\n",n);
	       n--;
	      }
       getch();
       }