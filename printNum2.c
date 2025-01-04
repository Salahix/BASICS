#include<stdio.h>
#include<cs50.h>

int main(void){
    int num  =  get_int("Enter the number: ");
    int i = 0;
    while ( i <= num){
        printf("%d\n",i);
        i++;
    }
}