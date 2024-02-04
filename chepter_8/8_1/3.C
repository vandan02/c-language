#include<stdio.h>
#include<conio.h>
      main()
      {
       //write a program 1 to 10 print using while loop
	      int a=1,n;

       clrscr();
		printf("enter any number:");
		scanf("%d",&n);
	      while(a<=n)
	      {
	       printf("%d\n",a);
	       a++;
	      }
       getch();
       }