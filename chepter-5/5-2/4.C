#include<stdio.h>
#include<conio.h>
      main()
      {
	       int a=33,b=24;
	       clrscr();

	    printf("swap tow variable whitout using + and - symbole\n");
	    printf("type value a\t:%d\n",a);
	    printf("type value d\t:%d\n",b);
	    a=a*b;
	    b=a/b;
	    a=a/b;
	    printf("a\t:%d\n",a);
	    printf("b\t:%d",b);

	     getch();
	    }