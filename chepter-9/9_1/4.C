#include<stdio.h>
#include<conio.h>
main()
{
      int n,rem, mul=1, sum=0;
      clrscr();
      printf("enter eny number :");
      scanf("%d",&n);
      while (n !=0)
      {

       rem=n%10;
       mul=mul*rem;
       sum=sum+rem;
       n=n/10;
       }
       if (mul==sum)
       {
	 printf("magic number");

       }
       else
       {
       printf("not magic number:");
       }


	getch();


}
