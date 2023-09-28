#include<stdio.h>

int main(){
    char a;
    printf("Enter the tletter: ");
    scanf("%c", &a);   
        
    if(a>=65 && a<=90){
        printf("It is an Uppercase");
    }
    else if(a>=97 && a<=122){
        printf("It is an Lowercase");
    }
    else{
        printf("It is non");
    }
    return 0;
}