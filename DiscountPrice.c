#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double calculateDiscountPrice(){

const double percentage = 0.14;
double price = 267000;

double discountPrice = percentage * price;
printf(" NEW DISCOUNT PRICE:  %.2lf\n" , discountPrice);
return discountPrice;

}

