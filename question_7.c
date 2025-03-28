//7. Write a program to find the position of first 1 in LSB.
#include<conio.h>
#include<stdio.h>
int main()
{
    int num,lsb,count=1;
    printf("Enter a number to find the position of first 1 from LSB:\n");
    scanf("%d",&num);
    for( ; ; )
    {
         lsb = num&1;
        if(lsb)
            break;
        num>>=1;
        count++;
    }
   printf(" first 1 from lSB is at %d position",count);
    getch();
    return 0;
}
