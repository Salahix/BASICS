#include<stdio.h>
#include<cs50.h>

int main(void){
    int store[5] ;
    for(int i= 0 ; i<5; i++){
         store[i]=  get_int("Enter the number(%d): ",i);
    }
    for(int i = 0 ; i<5; i++){
        printf("%d ",store[i]);
    }
    printf("/n");
}