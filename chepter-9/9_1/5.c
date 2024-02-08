#include <stdio.h>
#include<conio.h>
main() 
{
    int num = 1,a=1;
    
   clrscr(); 
    while (a <= 10) { 
        printf("%d, ", num);
        num = num * 10 + 1;
        a++;
    }
    
    getch();
}
