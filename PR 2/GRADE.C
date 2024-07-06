#include<stdio.h>
#include<conio.h>

main()
{
    int a;
    clrscr();
    printf("Enter Your Total Marks :",a);
    scanf("%d",&a);
    (a>=91 && a<=100)
		     ?printf("GRADE : A \n YOU ARE PASS!!!")
		     :(a>=81 && a<=90)
				     ?printf("GRADE :B \n YOU ARE PASS!!!")
				     :(a>=71 && a<=80)
						     ?printf("GRADE :C \n YOU ARE PASS!!! ")
						     :(a>=61 && a<=70)
								     ?printf("GRADE :D \n YOU ARE PASS!!!")
								     :(a>=33 && a<=60)
										     ?printf("GRADE :E")
										     :printf("GRADE :F \n YOU ARE FAIL!!!");
    getch();

}





