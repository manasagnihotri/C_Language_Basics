/*
#include <stdio.h>
void fibo(int a,int b,int n)
{
    if(n==0)
    return;
    printf("%d ",a+b);
    fibo(b,a+b,n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    fibo(0,1,n);`
    return 0;
}
*/
#include<stdio.h>
int fibo(int n){
    if(n==1||n==2)
    return 1;
    return (fibo(n-1)+fibo(n-2));
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    
    return 0;
}