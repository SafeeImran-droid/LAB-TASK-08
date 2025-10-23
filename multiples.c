#include <stdio.h>

int main()
{
    int i, j, num;

    printf("Enter a number: \n");
    scanf("%d",&num);

    for ( i = 1; i <= num; i++)
    {
        printf("%d: ",i);

        for ( j = 1; j <= 10; j++)
        {
            printf("%4d ",i*j);
        }
        printf("\n");
    }
    
    return 0;
}
