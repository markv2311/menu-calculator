#include <stdio.h>

int main (int args, char *argv){

	printf ("Here is our Menu! Would you like to order?\n");
	printf ("=========================\n");
	printf ("|       Vegas Menu      |\n");
	printf ("=========================\n");
	printf ("|1. Cheese Plater $23   |\n");
	printf ("|                       |\n");
	printf ("|2.French Onion Soup $16|\n");
	printf ("|                       |\n");
	printf ("|3.    Ribeye  $70      |\n");
	printf ("|                       |\n");
	printf ("|4. Fleur Burger $5000  |\n");
	printf ("|                       |\n");
	printf ("=========================\n");

	char orders[100]; //to hold the vaules of what was ordered 
	int sumOrder=0;
	int order; // to use the switch statement
	int x = 0; //used to place the statements in the array correctly.
	int placeOrder = 1;
	printf ("What would you like to order? ");
	while (placeOrder){
		fscanf(stdin,"%d", &order);
		switch(order)  {
			case 1:
			sumOrder += 23;
			orders[x] = "Cheese Plater";
			x++;
			break;
			case 2:
			sumOrder += 16;
			orders[x] = "French Onion Soup";
			x++;
			break;
			case 3:
			sumOrder += 70;
			orders[x] = "Ribeye";
			x++;
			break;
			case 4:
			sumOrder += 5000;
			orders[x] = "Fluer Burger";
			break;
			case 0:
			placeOrder = 0;
			break; 
		}
		printf ("That adds up to $%d.\nAnything else? 0 for no.\n", sumOrder);
	}
	printf("Thank you for ordering here is the bill for your meal\n");
	printf("\n");
	int tax = (sumOrder * .0825);
	printf ("Tax = $%d ",  tax);
	printf ("\n");
	int tip = (sumOrder * .20);
	printf ("Tip = $%d", tip);
	printf("\n");
	sumOrder = sumOrder + tip + tax;
	printf("Total = $%d\n", sumOrder);


}
