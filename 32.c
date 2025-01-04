#include<stdio.h>
#include<cs50.h>

int main(void){
    int arr[5] ;
    for(int i= 0 ; i<5; i++){
         arr[i]=  get_int("Enter the number(%d): ",i);
    }
    int  maxindex=0  ,minindex= 0;
    for(int i = 1 ; i <5 ; i++){
        if(arr[maxindex] < arr[i]){
            maxindex = i;
        }
        if(arr[minindex] > arr[i]){
            minindex = i;
        }
    }
    printf("the largest: %d \nthe smallest: %d\n",arr[maxindex],arr[minindex]);
}