#include<stdio.h>

int main(){
    int a = 2;
    int b = 3;
    int c = 4;
    int d = 0;
    if(a>b && a>c && a>d){
        printf("a is largest");
    }
    else if(b>a && b>c && b>d){
            printf("b is largest");
        }
    else if(c>a && c>b && c>d){
            printf("c is largest");
        }
    else if(d>a && d>b && d>c){
            printf("d is largest");
        }
    
    return 0;
}