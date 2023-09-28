#include<stdio.h>

int main(){
    float l, b;
    printf("Enter the value of length\n");
    scanf("%f", &l);

    printf("Enter the value of breadth\n"); 
    scanf("%f", &b);

    printf("The area of the retangle is %0.2f", l*b);
    
    return 0; 
}