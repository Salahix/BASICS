#include<stdio.h>
#include<cs50.h>

int main(void){
    int num1  =  get_int("Enter the number(1): ");
    int num2  =  get_int("Enter the number(2): ");
    int num3  =  get_int("Enter the number(3): ");

    int max = num1;
    if(max < num2) max =  num2;
    if (max <num3) max = num3;
    printf("the largest of %d\n", max);
}                              