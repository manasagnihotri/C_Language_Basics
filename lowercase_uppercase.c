#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character ");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90){
        printf("It is Upppercase");
    }
    else{
        printf("It is Lowercase");
    }
    return 0;
}