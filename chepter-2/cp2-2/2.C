#include<stdio.h>
#include<conio.h>
#define pf printf
#define sf scanf


main()
{
		 int a;
		 char ch;
		 float PI;
		 clrscr();
		 pf("enter eny number:");
		 sf("%d",&a);

		fflush(stdin);
		 pf("enter eny charcter:");
		 sf("%c",&ch);
		 pf("enter pi:");
		 sf("%f",&PI);



		 pf("a\t:%d\n",a);
		 pf("ch\t:%c\n",ch);
		 pf("pi\t:%f\n",PI);

		 getch();


 }