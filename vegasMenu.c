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

	char *orders[100] = {"Your Order Today: "}; //to hold the vaules of what was ordered
	char **ptr = orders;
	int sumOrder=0;
	int order; // to use the switch statement
	int x = 1; //used to place the statements in the array correctly.
	int placeOrder = 1;
	printf ("What would you like to order? ");
	while (placeOrder){
		fscanf(stdin,"%d", &order);
		switch(order)  {
			case 1:
			sumOrder += 23;
			ptr[x] = "Cheese Plater";
			x++;
			break;
			case 2:
			sumOrder += 16;
			ptr[x] = "French Onion Soup";
			x++;
			break;
			case 3:
			sumOrder += 70;
			ptr[x] = "Ribeye";
			x++;
			break;
			case 4:
			sumOrder += 5000;
			ptr[x] = "Fluer Burger";
			break;
			case 0:
			placeOrder = 0;
			break; 
		}
		printf ("That adds up to $%d.\nAnything else? 0 for no.\n", sumOrder);
	}
	int tax = (sumOrder * .0825);
	int tip = (sumOrder * .20);
	sumOrder = sumOrder + tip + tax;
	printf("Thank you for ordering here is the bill for your meal\n");
	printf("\n");
	printf ("=========================\n");
	printf ("|          Bill         |\n");
	printf ("=========================\n");
	printf ("|       Tax = $%d       |\n",  tax);
	printf ("|                       |\n");
	printf ("|		 Tip = $%d		 |\n", tip);
	printf ("|                       |\n");
	printf ("|		Total = $%d	     |\n", sumOrder);
	printf ("|                       |\n");
	printf ("|  ---  Signature  ---  |\n");
	printf ("|                       |\n");
	printf ("=========================\n");


}
