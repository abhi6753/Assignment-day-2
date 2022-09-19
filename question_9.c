//9. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("size of an int is %d\n",sizeof(a));
    printf("size of an float is %d\n",sizeof(b));
    printf("size of an char is %d\n",sizeof(c));
    printf("size of an double is %d",sizeof(d));
    getch();
    return 0;
}