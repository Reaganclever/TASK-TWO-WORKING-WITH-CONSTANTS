#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double computeTotalCost(){

const double taxRate = 0.03;
double productPrice = 35000;
double totalCost = productPrice + (taxRate * productPrice);

printf("\nPRODUCT PRICE:\t%.2lf\n" , productPrice);
printf("TAX RATE:\t%.2lf\n" , taxRate);
printf("------------\n");
printf("TOTAL COST:\t%.2lf\n" , totalCost);

return totalCost;



}

