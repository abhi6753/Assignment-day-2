//5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp_num,rem,sum=0;
    printf("Enter three-digit number:\n");
    scanf("%d",&num);
    temp_num = num;
    while(temp_num!=0)
    {
        rem = temp_num % 10;
        sum +=rem; 
        temp_num/=10;
    }
    printf("Sum of given number digits is %d",sum);
    getch();
    return 0;
}