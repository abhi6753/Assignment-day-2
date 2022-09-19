//1. Write a program to print unit digit of a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printf("Unit digit of %d is %d",num,num%10);
    getch();
    return 0;
}