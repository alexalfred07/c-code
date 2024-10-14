#include<stdio.h>
int main()
{
    
printf(">>>>  QUESTION 05 : Write a C program to declare two variables of type int and swap their values.\n");

   int a;
        printf("value of a = ");
        scanf("%d",&a);
   

   int b;
        printf("value of b = ");
        scanf("%d",&b);

    int temp;
        temp=a;

    a=b;
    b=temp;
                                                        printf("\n");

    printf("swaped their values : value of a = %d\n                      value of b = %d\n",a,b);




    return 0;
}