#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double calculateEmployeeBonus(){

const double percent = 0.35;
double salary = 235000;
double employeeBonus = percent * salary;
printf("\nSALARY:\t%.2lf\n" , salary);
printf("BONUS:\t%.2lf\n" , percent);
printf("------------\n");
printf("EMPLOYEE BONUS:\tUGX%.2lf\n" , employeeBonus);
return employeeBonus;
}

