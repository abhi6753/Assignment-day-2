//13. Write a program to take a three-digit number from the user and rotate its digits by\
one position towards the right.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    num = num/10+num%10*100;
    printf("After rotation, number is %d",num);
    getch();
    return 0;
}