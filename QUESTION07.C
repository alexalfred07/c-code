#include<stdio.h>
int main()
{
    
printf(">>>>  QUESTION 07 - Write a C program to declare a variable of type int and check whether it is even or odd.\n");

    int g;
    printf("Enter your number : ");
    scanf("%d",&g);

if (g%2==0)
{
    printf("%d is EVEN NUMBER.",g);
}
else 
{
    printf("%d is ODD NUMBER.",g);
}



    return 0;
}