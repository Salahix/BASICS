#include<stdio.h>
#include<cs50.h>

int main(void){
    int num  =  get_int("Enter the number: ");
    if (2%num == 0) {
        printf("the number is even\n");
    }else{
        printf("the number is odd\n");
    }

}                              