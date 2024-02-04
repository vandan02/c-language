#include<stdio.h>
#include<conio.h>
      main()
      {
	       int ang1,ang2,ang3,;
	       clrscr();

	    printf("Q-3 find the third angle of right triangal if two other angle are given\n");
	    printf("ang1\t:");
	    scanf("%d",&ang1);
	    printf("ang2\t:");
	    scanf("%d",&ang2);
	    ang3=180-(ang1+ang2);
	    printf("ang3\t:%d\n",ang3);


	     getch();
	    }