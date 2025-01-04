#include<stdio.h>
#include<cs50.h>

int main(void){
    int num  =  get_int("Enter the number: ");
    for(int i= 0 ; i<=10; i++){
       printf("%d = %d * %d \n",i*num,num,i );
    }

} 