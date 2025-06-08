#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>
double computeSimpleInterest(){
double principal = 50000;
double time = 3;
const double rate = 0.5;
double simpleInterest = principal * time * rate;
printf("SIMPLE INTEREST:  %.2lf\n" , simpleInterest);
return simpleInterest;
}

