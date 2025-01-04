#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include <ctype.h>

int main(void){
    string str = get_string("enter the text: ");
    string vowels = "aeiouy",consonants="bcdfghjklmnpqrstvwxz";
   
    int conntvowels = 0,countconsonants=0;
    for(int i= 0 ; i <strlen(str); i++ ){
        char ch = tolower(str[i]);
        for(int j= 0; j <6 ; j++){
            if ( ch== vowels[j]){
            conntvowels++;
            }
        }
       for(int k= 0 ; k <20 ; k++){
            if(ch == consonants[k] ){
                countconsonants++;
            }
        }
    }
        
    printf("vowels :%d ,consonants:%d ", conntvowels,countconsonants);
}