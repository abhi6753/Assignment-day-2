//4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    printf("Enter two number:\n");
    scanf("%f%f",&a,&b);
    printf("Before swapping:\na = %.2f and b = %.2f\n\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swaping:\na = %.2f and b = %.2f",a,b);
    getch();
    return 0;
}