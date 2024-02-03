      #include<stdio.h>
      #include<conio.h>
      main()
      {
      int a,b,c,d;
       clrscr();
	   printf("print any number a:");
	   scanf("%d",&a);
	   printf("print any number b:");
	   scanf("%d",&b);
	   printf("print any number c:");
	   scanf("%d",&c);
	   printf("print any number d:");
	   scanf("%d",&d);
	      if(a>b)
		    {
		     if(a>c)
			   {
			    if(a>d)
				   {
				   printf("a is max");
				    }
			     else
				 {
				 printf("d is max");
				 }
			     }
			       else
				  {
				   if(c>d)
					 {
					  printf("c is max");
					 }
				   else
				       {
				       printf("d is max");
				       }
				   }

		     }

		   else
		     {
		       if(b>c)
			     {if(b>d)
				    {
				    printf("b is max");
				    }
			       else
				   {
				    printf("d is max");
				    }
			      }

		      else{
			    if(c>d)
			    {
			    printf("c is max");
			    }
			    else
			    {
			    printf("d is max");
			    }

		      }

		      }

 getch();

	    }
