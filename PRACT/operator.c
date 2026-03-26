#include<stdio.h>
// operators =
//Arithmetic - +,-,*,/,% modulus - reminder 
//increment & decrement = ++ --
//assignment = +=,-=,*=,/=,%=
int main(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("\n Addition is %d ",a+b);
    printf("\n Minus is %d ",a-b);
    printf("\n Multiplication is %d ",a*b);
    printf("\n Division is %d ",a/b);
    printf("\n Modulus is %d ",a%b);
}