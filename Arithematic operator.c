#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=20,sum,sub,mul,div,rem;
    printf("The 1st value is: %d ",a);
    printf("\nThe 2st value is: %d ",b);
    sum=a+b;
    sub=b-a;
    mul=a*b;
    div=b/a;
    rem=b%a;
    printf("\nThe Sum= %d",sum);
    printf("\nThe Substraction= %d",sub);
    printf("\nThe Multiple= %d",mul);
    printf("\nThe Division= %d",div);
    printf("\nThe Remainder= %d",rem);
    return 0;
}