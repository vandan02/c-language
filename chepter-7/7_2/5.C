#include<stdio.h>
#include<conio.h>

main()
{
	   int a;
	   clrscr();
	   printf("recharge planes\n\n\n");
	   printf("press 1 for english\n");
	   printf("press 2 for hindi\n");
	   printf("press 3 for gujrati\n");
	   printf("select language:");
	   scanf ("%d",&a);
	   switch(a)
	   {
	     case 1: printf("continue is english\n\n");

		     printf("recharge planes\n");
		     printf("1 for internet recharge\n");
		     printf("2 for top-up recharge\n");
		     printf("3 for special recharge\n");
		     printf("select recharge plane:");
		     scanf("%d",&a);

		 switch(a)
		 {
		      case 1: printf("\n\nyour internet recharge is sucsessful");
		      break;
		      case 2: printf("\n\nyour top-up recharge is sucsessful");
		      break;
		      case 3: printf("\n\nyour special recharge is sucsessful");
		      break;
		      default: printf("\n\npls enter velid number");

		    }
		    break;
	     case 2: printf("continue is hindi\n\n");
		     printf("recharge planes\n");
		     printf("internet recharge ke liye 1 dabaye\n");
		     printf("top-up recharge ke liye 2 dabaye\n");
		     printf("special recharge ke liye 3 dabaye\n");
		     printf("konsa recharge plane karna he:");
		     scanf("%d",&a);

		 switch(a)
		 {
		      case 1: printf("\n\n internet recharge ho gaya he ");
		      break;
		      case 2: printf("\n\n top-up recharge ho gaya he ");
		      break;
		      case 3: printf("\n\nspecial recharge ho gaya he");
		      break;
		      default: printf("\n\nsahi number dale");

		    }
			break;
	     case 3: printf("continue is gujrati\n\n");
		     printf("recharge planes\n");
		     printf("internet recharge mate 1 dabavo\n");
		     printf("top-up recharge mate 2 dabavo\n");
		     printf("special recharge mate 3 dabavo\n");
		     printf("kayo recharge plane karava mango chho:");
		     scanf("%d",&a);

		 switch(a)
		 {
		      case 1: printf("\n\n internet recharge thay gyu chhe ");
		      break;
		      case 2: printf("\n\n top-up recharge thay gyu chhe");
		      break;
		      case 3: printf("\n\nspecial recharge thay gyu chhe");
		      break;
		      default: printf("\n\nbhai sacho number nakhne 3 number sivay bijo number dekhay chhe tane");


		    }
		      break;
		default: printf("\n\npls enter velid number");
		    }
	   getch();


}