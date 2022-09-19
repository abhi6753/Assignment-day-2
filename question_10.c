//10. Write a program to make the last digit of a number stored in a variable as zero.\
(Example - if x=2345 then make it x=2340)
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    num = num/10*10;
    printf("x = %d",num);
    getch();
    return 0;
}