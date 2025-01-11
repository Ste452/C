#include <stdio.h>


int main()
{
    int a1, nth, ratio, result;
    printf("Enter first number: ");
    scanf("%d", &a1);
    printf("\nEnter ratio for calculate: ");
    scanf("%d", &ratio);
    printf("\nEnter nth term: ");
    scanf("%d", &nth);

    result = a1 + (nth - 1) * ratio;
    printf("\n%d until %d with ratio %d is %d", a1, nth, ratio, result);


    return 0;
}
