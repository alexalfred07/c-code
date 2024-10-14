#include<stdio.h>
int main()
{
    
printf(">>>> QUESTION 09 - Write a C program to swap two integers using a third variable.\n");

    int j;
    printf("Enter Number(01) : ");
    scanf("%d",&j);

    int k;
    printf("Enter Number(02) : ");    
    scanf("%d",&k);

    int l;
    l=j;
    j=k;
    k=l;

    printf("SWAPED THE VALUE OF  j & k :\n j = %d\n k = %d",j,k);





    return 0;
}