/*SWITCH CASE USING ARITHMETIC OPERATORS*/
#include<stdio.h>
int main()
{
    char operator;
    int number1, number2;
    printf("please select any ARITHMETIC OPERATOR you wish!\n");
    scanf("%c",&operator);
    switch(operator)
    {
    case'+':
        printf("addition of two numbers is%d",number1+number2);
        break;
    case'-':
        printf("subtraction of two numbers is%d",number1-number2 );
        break;
    case'*':
        printf("multiplication of two numbers is%d",number1*number2);
        break;
    case'/':
        printf("division of two numbers is%d",number1/number2);
        break;
    case'%':
        printf("module of two number is%d",number1%number2);
        break;
    default:
    printf("you have entered the wrong operator\n");
    printf("please enter the correct operators such as +,-,*,/,%");
    break;

    }
}
