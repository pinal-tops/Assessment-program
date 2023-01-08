/* WAP BY USING FUNCTION >>>>>>>>

----------------MENU--------------------
NO   PRODUCT         PRICE
1	APPLE			70
2	ORANGES			90
3	GRAPES			100
4	BANANA			80
5	MANGO			150


ENTER YOUR CHOICE FROM ABOVE : 3

ENTER QUANTITY IN KG : 2

DO YOU WANT TO ADD MORE ? YES/NO

IF YES >>>> THEN REPEAT THE PROCESS AND ADD THE NEW TOTAL TO THE PREVIOUS ONE 

TOTAL BILL

IF NO  >>>> THEN PRINT THANK YOU

TOTAL BILL :

*/

#include<stdio.h>
float total=0;
float a(float q);
float b(float q);
float c(float q);
float d(float q);
float e(float q);

int main()
{
	int no,yn;
	float q;
	
	menu:
	{
	printf("------------------MENU------------------\n");
	printf("\nNO		PRODUCT			PRICE\n");
	printf("\n1		APPLE			70");
	printf("\n2		ORANGES			90");
	printf("\n3		GRAPES			100");
	printf("\n4		BANANA			80");
	printf("\n5		MANGO			150");	
	}
	
	printf("\n\nEnter your choice from above : ");
	scanf("%d",&no);
	switch (no)
		{
			case 1 :
				
				printf("\nEnter Quantity in Kg : ");
				scanf("%f",&q);
				total=a(q);
				
				break;
				
			case 2 :
				
				printf("\nEnter Quantity in kg : ");
				scanf("%f",&q);
				total=b(q);
				break;
				
			case 3 :
				
				printf("\nEnter Quantity in kg : ");
				scanf("%f",&q);
				total=c(q);
				break;
				
			case 4 :
				
				printf("\nEnter Quantity in kg : ");
				scanf("%f",&q);
				total=d(q);
				break;
				
			case 5 :
				
				printf("\nEnter Quantity in kg : ");
				scanf("%f",&q);
				total=e(q);
				break;
				
				
			
			
			default :
				
				printf("\ncome again for shopping");
				break;
		}
		
	printf("\nDo you want to add more ?");
	printf("\n1   - Press 1 for Yes ");
	printf("\n2   - Press 2 for No \nans - ");
	scanf("%d",&yn);
		if(yn==1)
		{
			goto menu;
		}
		else
		{
			printf("\nThank you..!");
		}
	
	printf("\nTotal : %.2f",total);
	
	return 0;
}
	float a(float q)
		{
			return total=total+70*q;
		}
	float b(float q)
		{
			return total=total+90*q;
		}
	float c(float q)
		{
			return total=total+100*q;
		}
	float d(float q)
		{
			return total=total+80*q;
		}
	float e(float q)
		{
			return total=total+150*q;
		}
