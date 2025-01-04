#include<stdio.h>
#include<cs50.h>

int main(void){
    int num  =  get_int("Enter the number: ");
    if (num == 0) {
        printf("the number is zero\n");
    }else if (num > 0){
        printf("the number is positive\n");
    }else{
        printf("the number is negative\n");
    }

}     