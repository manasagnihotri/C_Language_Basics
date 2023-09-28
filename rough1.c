#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int i;

    for(i=0;i<=a;i++){
        if(i%2==0){
            printf("");
        }
        else{
            printf("%d",i);
        }

    }

    return 0;
}