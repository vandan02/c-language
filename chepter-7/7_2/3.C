#include<stdio.h>
#include<conio.h>


main()
   {
	    int a,b,c,d,e;
       clrscr();
	   printf("enter value a:");
	   scanf("%d",&a);
	    printf("enter value b:");
	   scanf("%d",&b);
	    printf("enter value c:");
	   scanf("%d",&c);
	    printf("enter value d:");
	   scanf("%d",&d);
	     printf("enter value e:");
	   scanf("%d",&e);
	   if(a>b)
	   {
		if(a>c)
	       {
		printf("the large nymber is:%d",a);
	       }
	       else
	       {
			printf("the large number is:%d",c);
	       }
	   }
	 else if(d>a && d>c && d>e)
	  {
		printf("the large number is:%d",d);
	  }
	 else if(d>b && d>e )
	 {
		printf("the large number is:%d",d);
	 }
       else if(e>a && e>b )
       {
		printf("the large number is:%d",e);
       }
       else if(e>c)
       {
		printf("the large number is:%d",e);
       }

	 else{
	     if(b>c)
	       {
		printf("the large number is:%d",b);
	       }
	       else
	       {
		printf("the laege number is:%d",c);
	       }
	    }

	   getch();

    }