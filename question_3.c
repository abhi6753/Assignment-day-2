//3. Write a program to swap values of two int variables
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,temp;
    printf("Enter two number:\n");
    scanf("%f%f",&a,&b);
    printf("Before swapping:\na = %.2f and b = %.2f\n\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:\na = %.2f and b = %.2f",a,b);
    getch();
    return 0;
}