#include <stdio.h>

int main() {
   short x , y , z ;
   printf("Please Enter three int Numbers ! ");
   scanf("%hi %hi %hi",&x,&y,&z);
   printf("\n num1  =  %hi  , num2 = %hi  , num3  = %hi ",x,y,z);
   int sum = x+y+z;
   printf("\n %d sum =", sum);
   return 0;
}
