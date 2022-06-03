#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0;
    printf("Enter number for pyramid : ");
    scanf("%d",&a);

    for(int col=1;col<=a;col++){
       for(int row=1;row<=col;row++){
           b = b+1;
        printf("%d ",b);
       }
       printf("\n");
    }

    return 0;
}
