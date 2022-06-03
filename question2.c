#include <stdio.h>
#include <stdlib.h>

int main()
{
     int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,sum;
     float avg;

     printf("Enter ten numbers for addition and average: ");
     scanf("%d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);

     sum = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
     avg = sum/10;
     printf("Sum is : %d\n",sum);
     printf("Average is : %.2f",avg);

    return 0;
}
