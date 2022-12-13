/*nested if for eligiblity for working */
#include<stdio.h>
int main()
{
    int age;
    printf("please enter your age here:\n");
    scanf("%d",&age);
    if(age<18)
    {
        printf("you are minor\n");
        printf("not eligible to work");
    }
    else
    {
        if(age>=18&&age<=60)
        {
            printf("you are eligible to work\n");
            printf("please fill in your details and apply\n");
        }
        else
        {
            printf("you are too old to work as per government rules\n");
            printf("please collect your pension!\n");
        }
    }
    return 0;

}
