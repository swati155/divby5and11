#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    if(0==a%5)
    {

        printf("the number is divided by 5\n");
    }
    if(0==a%11)
        {
            printf("the number is divided by 11\n");
        }

    return 0;
}
