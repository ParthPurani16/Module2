#include<stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    printf("\n A is %d",a);
    printf("\n P is %d",*p);
    *p=25;
    printf("\n A is %d",a);
    printf("\n P is %d",*p);
    printf("\n P is %p",p);
}