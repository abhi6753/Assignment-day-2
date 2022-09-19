//8. Write a program to check whether the given number is even or odd using a bitwise operator.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if((num>>1)%2==0)
     printf("%d is even number",num);
    else
     printf("%d is odd number",num);
    getch();
    return 0;
}