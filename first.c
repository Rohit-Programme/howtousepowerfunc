#include<stdio.h>
#include<math.h>
int main(){
    int number,power;

    printf("enter the no");
    scanf("%d",&number);

    printf("enter the power");
    scanf("%d",&power);

    int ans = pow(number,power);
    printf("the answer is =%d",ans);
}