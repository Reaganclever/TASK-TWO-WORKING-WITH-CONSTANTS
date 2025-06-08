#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double calculateDiscountPrice(){

const double percentage = 0.24;
double price = 23000;

double discountPrice = percentage * price;
printf("DISCOUNT PRICE:  %.2lf\n" , discountPrice);
return discountPrice;

}

