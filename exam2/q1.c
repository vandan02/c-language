#include<stdio.h>

main()
{
	int n,fectorial=1;
	printf("enter any number:");
	scanf("%d",&n);
	if (n<0)
	{
		printf("enter velid number");
	}else
	{
		for(int i=1; i<=n;++i)
		{
			fectorial *=i;
		}
		
	}

	printf("%d",fectorial);
}