#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double computeExchangeRate(){

const double rate = 3500;
double USD = 700;

double UGX = USD * rate;

printf("\nAMOUNT IN USD: \t%.2lfUSD\n" , USD);
printf("EXCHANGE RATE: \t%.2lfUGX/USD\n" , rate);
printf("-------------\n");
printf("AMOUNT IN UGX: \t%.2lfUGX\n" ,UGX);

return UGX;


}
