/*
#include<stdio.h>
    void pp(int n){
       if(n==0)
       return;
       pp(n-1);
       int j;
       for(j=0;j<(2*n-1);j++){
        printf("%d",j);
       }
       printf("\n");
    }
int main(){
    int n=4;
    //scanf("%d",&n);
    pp(n);
    
    return 0;
}*/

#include<stdio.h>

void pp(n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n=4;
    pp(n);
    
    return 0;
}