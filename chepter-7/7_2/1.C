      #include<stdio.h>
      #include<conio.h>
      main()
      {
	    int a,b,c;
       clrscr();
	   printf("enter value a:");
	   scanf("%d",&a);
	    printf("enter value b:");
	   scanf("%d",&b);
	    printf("enter value c:");
	   scanf("%d",&c);
	   if(a<b)
	   {
		if(a<c)
	       {
		printf("the small nymber is:%d",a);
	       }
	       else
	       {
			printf("the small number is:%d",c);
	       }
	   }

	 else {
	     if(b<c)
	       {
		printf("the small number is:%d",b);
	       }
	       else
	       {
		printf("the small number is:%d",c);
	       }
	    }
	   getch();

    }
