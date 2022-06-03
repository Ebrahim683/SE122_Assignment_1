#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,sum = 0;
    printf("Enter how many odd numbers you want to add : ");
    scanf("%d",&number);
    for(int i = 1; i<=number; i++){
        if(i%2 == 0){
            sum = sum+i;
        }
    }

    printf("sum of odd numbers under %d is : %d\n",number,sum);

    return 0;
}
