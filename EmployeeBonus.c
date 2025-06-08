#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double calculateEmployeeBonus(){

const double percent = 0.70;
double salary = 33560;
double employeeBonus = percent * salary;
printf("\nNEWer SALARY:\t%.2lf\n" , salary);
printf("NEWest BONUS:\t%.2lf\n" , percent);
printf("------------\n");
printf("NEWEst EMPLOYEE BONUS:\tUGX%.2lf\n" , employeeBonus);
return employeeBonus;
}

