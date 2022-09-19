//6. Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter character:\n");
    scanf("%c",&ch);
    printf("%d is ASCII code of '%c'",ch,ch);
    getch();
    return 0;
}