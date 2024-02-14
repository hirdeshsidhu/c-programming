#include <stdio.h>
int main(void){
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(int i =2;i<x;i++){
        y = x%i;
        if(y == 0){
            break;
        }
    }
    if(y == 0){
        printf("Not a prime number");
    }else{
        printf("Prime Number");
    }
    return 0;
}
