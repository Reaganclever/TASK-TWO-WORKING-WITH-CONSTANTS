#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>
double computeSimpleInterest(){
double principal = 23500;
double time = 5;
const double rate = 0.2;
double simpleInterest = principal * time * rate;
printf("NEW SIMPLE INTEREST:  %.2lf\n" , simpleInterest);
return simpleInterest;
}

