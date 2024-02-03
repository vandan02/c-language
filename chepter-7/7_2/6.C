#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();
	printf("enter eny number");
	scanf("%c",& a);


	if((a >= 'a' && a<='z' ) ||(a >= 'A' && a<='Z' ) )
	 {
	 printf("this is a charactor");
	 }
	else if( (a>='0' && a<='9' ))
	 {
	    printf("this is a number");

	 }

	else
	{
	   printf("this is a special caracter");

	}

	getch();

}