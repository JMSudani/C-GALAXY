#include<stdio.h>
#include<conio.h>

main()
{    int salary ;
     int hra =10;
     int da=5;
     int ta=8;
     int gross_salary;
    clrscr();
    printf("Enter the velue of salary :");
    scanf("%d",&salary);
    gross_salary=salary+(salary*hra/100)+(salary*da/100)+(salary*ta/100);
    printf("gross_salary\t : %d",gross_salary);




    getch();
}





