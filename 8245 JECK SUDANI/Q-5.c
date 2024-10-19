#include<stdio.h>

main()
{
	int a;
	printf("Enter 1\n");
	
	printf("Enter 2\n");
	
	printf("Enter 3\n");
	
	printf("Enter 4\n");
	
	printf("Enter 5\n");

	printf("Enter 6\n");
	
	printf("Enter 7\n");
	
	printf("Enter Any Number:");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1 : printf("Sonday");
		break;
		case 2 : printf("Monday");
		break;
		case 3 : printf("Tuseday");
		break;
		case 4 : printf("Wednesday");
		break;
		case 5 : printf("Thursday");
		break;
		case 6 : printf("Friday");
		break;
		case 7 : printf("Satureday");
		break;
		
	}
}
