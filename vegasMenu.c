#include <stdio.h>
#include <malloc.h>
#include <string.h>

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


	char *orders[100] = {}; //to hold the vaules of what was ordered
	char **ptr = orders;
  
	char *orders [50]; //to hold the vaules of what was ordered
	for (int r=0; r < 50; r++){
		orders[r] = malloc (sizeof(char)*10);
	}
  
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
			strcpy(orders[x], "Cheese Plater");
			x++;
			break;
			case 2:
			sumOrder += 16;
			strcpy(orders[x], "French Onion Soup");
			x++;
			break;
			case 3:
			sumOrder += 70;
			strcpy(orders[x], "Ribeye");
			x++;
			break;
			case 4:
			sumOrder += 5000;
			strcpy(orders[x], "Fluer Burger");
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
	for (y=0; y < 4; y++);{
            int first = strcmp(orders[y], "Cheese Plater");
			if (first == 1)
                ncp++;
        }
	int nfs = 0; //number of french soup
	for (v=0; v < 4; v++);{
            int second = strcmp(orders[v],"French Onion Soup");
            if (second == 1)
				nfs++;
        }
	int nr = 0;  //number of the Ribeye
	for (w=0; w < 4; w++);{
            int third = strcmp(orders[w],"Ribeye");
            if (third ==1)
				nr++;
        }
	int nfb = 0; // number of Fluer Burger
	for (i=0; i < 4; i++);{
            int fourth = strcmp(orders[i], "Fluer Burger");
            if (fourth == 1)
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
	printf ("|	Total = $%d	|\n", sumOrder);
	printf ("|                       |\n");
	printf ("|  ---  Signature  ---  |\n");
	printf ("|                       |\n");
	printf ("=========================\n");


}
