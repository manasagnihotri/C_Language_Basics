#include<stdio.h>

int sum(int *a,int *b){
    return a + b;
}
int main(){
    int a=2;
    int b=3;
    printf("sum is %d",sum(a,b));
    
    return 0;
}