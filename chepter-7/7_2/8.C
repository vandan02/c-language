#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();
	printf("a: monday\n");
	printf("b: tuesday\n");
	printf("c: wednesday\n");
	printf("d: thursday\n");
	printf("e: frieday\n");
	printf("f: satrday\n");
	printf("g: sunday\n");
	printf("enter number:");
	scanf("%c",&a);
	switch(a)
       {	case 'a':
       printf("monday");
		break;
		case 'b':
       printf("tuesday");
		break;
		case 'c':
       printf("wednesday");
		break;
		case 'd':
       printf("thursday");
		break;
		case 'e':
       printf("frieday");
		break;
		case 'f':
       printf("satrday");
		break;
		case 'g':
       printf("sunday");
		break;
	}





	getch();

}