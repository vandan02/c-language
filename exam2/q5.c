#include <stdio.h>

void swap(int *a, int *b) 
{
	 int c;
     c = (*a);
    *a = (*b);
    *b =  c;
}

 void main() 
 {
    int n1, n2;

    printf("Enter value of num1: ");
    scanf("%d",&n1);
    printf("Enter value of num2: ");
    scanf("%d",&n2);

    printf("Before swapping: num1 = %d, num2 = %d\n", n1, n2);

    swap(n1,n2);

    printf("After swapping: num1 = %d, num2 = %d\n", n1, n2);
}