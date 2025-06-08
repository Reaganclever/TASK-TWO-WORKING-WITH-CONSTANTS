#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double computeExchangeRate(){

const double rate = 3750.23;
double USD = 70890;

double UGX = USD * rate;

printf("\nNEWEST AMOUNT IN USD: \t%.2lfUSD\n" , USD);
printf("NEWER EXCHANGE RATE: \t%.2lfUGX/USD\n" , rate);
printf("-------------\n");
printf("NEWEST AMOUNT IN UGX: \t%.2lfUGX\n" ,UGX);

return UGX;


}
