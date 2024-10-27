#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=5,sum,sub,mul,div,rem;
    printf("The 1st value is: %d ", a);
    printf("\nThe 2nd value is: %d ",b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=b%a;
    printf("\nThe Sum= %d" ,sum);
    printf("\nThe Subtraction= %d",sub);
    printf("\nThe multiple= %d",mul);
    printf("\nThe division= %d",div);
    printf("\nThe Remainder= %d",rem);
    return 0;
    
}