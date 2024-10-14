#include<stdio.h>
int main()
{
    
printf(">>>>  QUESTION 08 - Write a C program to declare two variables of type float and find their product.\n");

    float h;
    printf("Enter fisrt digit : ");
    scanf("%f",&h);

    float i;
    printf("Enter second number : ");
    scanf("%f",&i);

    float product;
    product = h * i;

    printf("Product = %.3f",product);



    return 0;
}