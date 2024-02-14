#include <stdio.h>
int main(void){
    int number,product;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(int i =1;i<=10;i++){
        printf("%d X %d = %d\n",number,i,number* i);
    }
}
