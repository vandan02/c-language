#include<stdio.h>

    
	struct movie{
	char title[100];
	char genration[100];
	char language[100];
	};


main()
{
	int n;
	printf("how much movie u add:");
	scanf("%d",&n);
	
	struct movie m[n];
	
	
	for(int i = 1; i<=n;i++)
	{
		fflush(stdin);
		printf("enter movie tital i:");
		scanf("%[^\n]",&m[i].title);
		fflush(stdin);
		printf("enter movie genration i:");
		scanf("%[^\n]",&m[i].genration);
			fflush(stdin);
		printf("enter movie language i:");
		scanf("%[^\n]",&m[i].language);
		printf("\n\n");
	}
	
		for(int i = 1; i<=n;i++)
	{
		
		printf("enter movie tital:%s\n",m[i].title);
		
		printf("enter movie genration:%s\n",m[i].genration);
		
		printf("enter movie language:%s\n",m[i].genration);
		
	}
	
	
}