#include <stdio.h>
int main(void){
    int n1,n2,n3,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    n1 = 0;
    n2 = 1;
    printf("%d\n%d\n",n1,n2);
    for(int i = 2;i<number;i++){
        n3 = n1 + n2;
        printf("%d\n",n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;

}
