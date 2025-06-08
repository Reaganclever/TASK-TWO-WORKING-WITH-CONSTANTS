#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double computeExchangeRate(){

const double rate = 3750;
double USD = 7000;

double UGX = USD * rate;

printf("\nNEW AMOUNT IN USD: \t%.2lfUSD\n" , USD);
printf("NEW EXCHANGE RATE: \t%.2lfUGX/USD\n" , rate);
printf("-------------\n");
printf("NEW AMOUNT IN UGX: \t%.2lfUGX\n" ,UGX);

return UGX;


}
