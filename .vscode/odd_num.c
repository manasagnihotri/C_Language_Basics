#include<stdio.h>

int main(){
    
    int a;
    scanf("%d",&a);
    int i;
    for(i=0;i<=a;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
    return 0;
}