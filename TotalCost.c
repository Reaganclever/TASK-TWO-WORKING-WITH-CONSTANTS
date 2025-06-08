#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double computeTotalCost(){

const double taxRate = 0.36;
double productPrice = 45000;
double totalCost = productPrice + (taxRate * productPrice);

printf("\nNEWEST PRODUCT PRICE:\t%.2lf\n" , productPrice);
printf("NEWER TAX RATE:\t%.2lf\n" , taxRate);
printf("------------\n");
printf(" NEWestTOTAL COST:\t%.2lf\n" , totalCost);

return totalCost;



}

