#include <stdio.h>

main()
{
	int n=10,m=10;
	int a,choise;
	printf("press 1 to +\n");
	printf("press 2 to -\n");
	printf("press 3 to *\n");
	printf("press 4 to /\n");
	printf("press 5 to %\n");
	printf("Enter Your First Value :");
	scanf("%d",&n);
	printf("Enter Your Second Value :");
	scanf("%d",&m);
	printf("Enter your symbol");
	
	for(;;)
	switch(choise)
	{
		case 1 : printf("Aditon %d + %d = %d",n,m,(n+m));
		break;
		case 2 : printf("Substraction %d - %d = %d",n,m,(n-m));
		break;
		case 3 : printf("Multiplicatiuon %d * %d = %d",n,m,(n*m));
		break;
		case 4 : printf("Division %d / %d = %d",n,m,(n/m));
		break;
		case 5 : printf("Modulus %d %% %d = %d",n,m,(n%m));
		break;
		
		
	}
}
