#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>
double computeSimpleInterest(){
double principal = 286440;
double time = 9;
const double rate = 0.278;
double simpleInterest = principal * time * rate;
printf("NEWEST SIMPLE INTEREST:  %.2lf\n" , simpleInterest);
return simpleInterest;
}

