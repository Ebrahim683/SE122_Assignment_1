#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the column number of pyramid : ");
    scanf("%d",&a);
    for(int col = 1;col<=a; col++){
        for(int row = 1;row<=col; row++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
