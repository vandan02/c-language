#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,x;
    clrscr();

    printf("Q1 Write a program to swap two variables using the third variable.\n\n");
    printf("Enter eny number:");
    scanf("%d",&a);
    printf("Enter eny number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a\t: %d\n",a);
    printf("b\t: %d\n\n",b);

    printf("Q2 Write a program to swap two variables without using a third variable.\n\n");
    printf("Enter eny number:");
    scanf("%d",&a);
    printf("Enter eny number:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a\t: %d\n",a);
    printf("b\t: %d\n\n",b);

    printf("Q3 Wrrite a program to find the formula's answer (x+y)^2.\n\n");
    printf("Enter eny number x:");
    scanf("%d",&a);
    printf("Enter eny number y:");
    scanf("%d",&b);
    x=(a*a)+(b*b)+(2*a*b);
    printf("x\t: %d\n\n",x);

    printf("Q4 Write a program to find the formula's answer (x-y)^2.\n\n");
    printf("Enter eny number x:");
    scanf("%d",&a);
    printf("Enter eny number y:");
    scanf("%d",&b);
    x=(a*a)-(b*b)-(2*a*b);
    printf("x\t: %d\n\n",x);

    printf("Q5 Write a program to find the formula's answer (x+y)^3.\n\n");
    printf("Enter eny number x:");
    scanf("%d",&a);
    printf("Enter eny number y:");
    scanf("%d",&b);
    x=(a*a)+(b*b)+(3*a*b);
    printf("x\t: %d\n\n",x);

    getch();

}
