#include <stdio.h>
int main(void){
    int number,sum = 0,remainder;
    printf("Enter the number: ");
    scanf("%d",&number);
    int temp = number;
    for(;number!=0;){
        remainder = number%10;
        sum = sum + remainder * remainder * remainder;
        number = number / 10;
    }
    printf("%d\n",sum);
    if(temp == sum){
        printf("Armstrong Number\n");
    }else{
        printf("Not Armstrong Number\n");
    }
    return 0;
}
