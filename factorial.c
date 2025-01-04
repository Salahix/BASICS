#include<stdio.h>
#include<cs50.h>

int main(void){
    int num  =  get_int("Enter the number: ");
    for(int i=num-1; i>0; i--){
        num =  num * i;
    }

    printf("the factorial : %d\n", num);
}     