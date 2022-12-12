/*multiplication using post increment*/
#include<stdio.h>
void main()
{
    int a,z,x=10,y=12; //declaration part//
    z=x*y++;
    a=x*y;
    printf("%d,",z); //executable part//
    printf("%d",a);
}
//output:120,130//
