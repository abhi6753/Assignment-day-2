//2. Write a program to print a given number without its last digit.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printf("%d is without last digit is %d",num,num/10);
    getch();
    return 0;
}