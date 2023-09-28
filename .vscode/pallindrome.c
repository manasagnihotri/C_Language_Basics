#include <stdio.h>
int main(){
    int n;
    int sum=0,rem=0,q;
    scanf("%d",&n);
    q=n;
    while(q){
        rem = q%10;
        sum = sum*10+rem;
        q/=10;
    }
    if(n==sum)
    printf("Plaindrome");
    else
    printf("Not");
    return 0;
}