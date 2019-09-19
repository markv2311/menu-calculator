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
	int y = 0;
	int v =0;
	int i =0;
	int w=0;
	int ncp = 0; //number of cheese platers
	for (y=0; y < 100; y++);{
                if (orders[y] = "Cheese Plater")
                        ncp++;
        }
	int nfs = 0; //number of french soup
	for (v=0; v < 100; v++);{
                if (orders[v] = "French Onion Soup")
                        nfs++;
        }
	int nr = 0;  //number of the Ribeye
	for (w=0; w < 100; w++);{
                if (orders[w] = "Ribeye")
                        nr++;
        }
	int nfb = 0; // number of Fluer Burger
	for (i=0; i < 100; i++);{
                if (orders[i] = "Fluer Burger")
                        nfb++;
        }
	int tax = (sumOrder * .0825);
	int tip = (sumOrder * .20);
	sumOrder = sumOrder + tip + tax;
	printf("Thank you for ordering here is the bill for your meal\n");
	printf("\n");
	printf ("=========================\n");
	printf ("|          Bill         |\n");
	printf ("=========================\n");
	printf ("|                       |\n");
			if (ncp){
	printf ("|   %d Cheese Platers    |\n", ncp);}
			else{
	printf ("|                        |\n");}
	printf ("|                       |\n");
			if (nfs){
	printf ("| %d French Onion Soup   |\n", nfs);}
			else{
	printf ("|                       |\n");}
	printf ("|                       |\n");
			if (nr){
	printf ("|       %d Ribeye        |\n", nr);}
			else{
	printf ("|                       |\n");}
	printf ("|                       |\n");
			if (nfb){
	printf ("|     %d Fluer Burger    |\n", nfb);}
			else{
	printf ("|                       |\n");}
	printf ("|                       |\n");
	printf ("|                       |\n");
	printf ("|       Tax = $%d       |\n",  tax);
	printf ("|                       |\n");
	printf ("|       Tip = $%d       |\n", tip);
	printf ("|                       |\n");
	printf ("|	Total = $%d	 |\n", sumOrder);
	printf ("|                       |\n");
	printf ("|  ---  Signature  ---  |\n");
	printf ("|                       |\n");
	printf ("=========================\n");


}
