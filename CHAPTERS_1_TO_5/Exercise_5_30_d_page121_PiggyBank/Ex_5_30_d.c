#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int hundredDollar, fiftyDollar, twentyDollar, tenDollar, dollar, quarter, dime, nickel, penny;
	double totalPiggyBank;

	printf("How many one-hundred-dollar bills in the piggy bank?\n");
	scanf("%d", &hundredDollar);
	
	printf("\n\n");
	
	printf("How many fifty-dollar bills in the piggy bank?\n");
	scanf("%d", &fiftyDollar);
	
	printf("\n\n");
	
	printf("How many twenty-dollar bills in the piggy bank?\n");
	scanf("%d", &twentyDollar);
	
	printf("\n\n");
	
	printf("How many ten-dollar bills in the piggy bank?\n");
	scanf("%d", &tenDollar);
	
	printf("\n\n");
	
	printf("How many dollars in the piggy bank?\n");
	scanf("%d", &dollar);
	
	printf("\n\n");
	
	printf("How many quarters in the piggy bank?\n");
	scanf("%d", &quarter);
	
	printf("\n\n");
	
	printf("How many dimes in the piggy bank?\n");
	scanf("%d", &dime);
	
	printf("\n\n");
	
	printf("How many nickels in the piggy bank?\n");
	scanf("%d", &nickel);
	
	printf("\n\n");
	
	printf("How many pennies in the piggy bank?\n");
	scanf("%d", &penny);
	
	printf("\n\n");
	
	totalPiggyBank = (hundredDollar*100.00) + (fiftyDollar*50.00) + (twentyDollar*20.00) + (tenDollar*10.00) + (dollar*1.00) + (quarter*0.25) + (dime*0.10) + (nickel*0.05) + (penny*0.01);
	
	printf("The total amount of money you have in your piggy bank is %g $", totalPiggyBank);
	
	getchar();
	getchar();
	getchar();
	
	
	return 0;
}
