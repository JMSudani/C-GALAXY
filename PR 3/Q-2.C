#include<stdio.h>
#include<conio.h>

main()
{       int n,length=0;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);
	while (n!=0)
	{
	 n=n/10;
	 length++;

	}
	 printf("%d",length);










		 getch();
}







