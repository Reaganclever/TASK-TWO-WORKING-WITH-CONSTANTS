#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double computeTotalCost(){

const double taxRate = 0.06;
double productPrice = 40000;
double totalCost = productPrice + (taxRate * productPrice);

printf("\nNEW PRODUCT PRICE:\t%.2lf\n" , productPrice);
printf("NEW TAX RATE:\t%.2lf\n" , taxRate);
printf("------------\n");
printf(" NEW TOTAL COST:\t%.2lf\n" , totalCost);

return totalCost;



}

