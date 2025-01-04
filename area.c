#include<stdio.h>
#include<cs50.h>

int main(void){
    int length  =  get_int("Enter the length: ");
    int breadth  =  get_int("Enter the breadth: ");

    printf("the area of a rectangle: %d\n",length*breadth);
}                              