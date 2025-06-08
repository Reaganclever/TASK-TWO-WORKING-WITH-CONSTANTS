#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double calculateDiscountPrice(){

const double percentage = 0.55;
double price = 34500;

double discountPrice = percentage * price;
printf(" NEWEST. DISCOUNT PRICE:  %.2lf\n" , discountPrice);
return discountPrice;

}

