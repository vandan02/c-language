#include<stdio.h>
 #include<conio.h>
      main()
      {
	       int salary,hra,da,ta,grosssalary;
	       clrscr();


	    printf("\nQ-2 write c program to find gross salary by adding %% of hra, da, ta of user choice\n");
	    printf("type basic salary\t:");
	    scanf("%d",&salary);
	    hra=salary/10;
	    printf("hra added\t:%d\n",hra);
	    da=salary/20;
	    printf("da added\t:%d",da);
	    ta=salary/12;
	    printf("\nta added\t:%d",ta);
	    grosssalary=salary+hra+da+ta;
	    printf("\ngross salary is\t:%d\n",grosssalary);


	     getch();
	    }
