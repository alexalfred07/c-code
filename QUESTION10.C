#include<stdio.h>
#include <ctype.h>
int main()
{

printf(">>>> QUESTION 10 - .Write a C program to declare a variable of type char and convert it to uppercase.\n");                                                            
    
                                                            printf("\n");
    char ch;
    printf("ENTER YOUR CHARACTER :: ");
    scanf("%c", &ch);
    

     ch = toupper(ch);

    printf("UPPERCASE CHATACTER :: %c",ch);



    return 0;
}