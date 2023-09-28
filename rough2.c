#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    scanf("%s",str);
    int  n = strlen(str);

    for(int i=0;i<n;i++){
        if(i>97 && i<122){
            str[i] = str[i]-32;
            printf("%c",str[i]);
        }
    }
    return 0;
}