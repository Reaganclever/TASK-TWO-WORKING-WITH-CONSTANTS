#include <stdio.h>
#include "TaskTwoProject.h"
#include <stdlib.h>

double calculateEmployeeBonus(){

const double percent = 0.67;
double salary = 38000;
double employeeBonus = percent * salary;
printf("\nNEW SALARY:\t%.2lf\n" , salary);
printf("NEW BONUS:\t%.2lf\n" , percent);
printf("------------\n");
printf("NEWER EMPLOYEE BONUS:\tUGX%.2lf\n" , employeeBonus);
return employeeBonus;
}

