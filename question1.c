#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a,rev_num,sum = 0;
   printf("Enter numbers: ");
   scanf("%d",&a);
   while(a!=0){
    rev_num = a%10;
    sum = sum+rev_num;
    a = a/10;
   }

   printf("The sum of digits: %d",sum);

    return 0;
}
