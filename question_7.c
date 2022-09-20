//7. Write a program to find the position of first 1 in LSB.
#include<conio.h>
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num%2 == 0)
      printf("Least significant bit is 0.");
    else
      printf("Least significant bit is 1.");
    getch();
    return 0;
}