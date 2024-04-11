//
// Created by Nguyễn Duy Công on 11/04/2024.
//
#include <stdio.h>
int main() {
    printf("Name: Mark \n");
    float salary;
    float basic = 2500;
    float daper = 55;
    float bonper = 33.33;
    float loandet = 250.00;
    salary= basic+basic*daper/100+bonper*basic/100-loandet;
    printf("Salary($): %f\n", salary);
    return 0;
}