//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and\
convert it into USD.
#include<stdio.h>
#include<conio.h>
int main()
{
    float rupee;
    printf("Enter amount in INR:\n");
    scanf("%f",&rupee);
    printf("USD = %.2f$",rupee/76.23);
    getch();
    return 0;
}