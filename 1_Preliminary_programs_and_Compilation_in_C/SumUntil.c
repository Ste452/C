#include <stdio.h>


int main()
{
    int a1, nth, ratio,result;
    printf("Enter first number: ");
    scanf("%d", &a1);
    printf("Enter ratio for calculate: ");
    scanf("%d", &ratio);
    printf("Enter nth term: ");
    scanf("%d", &nth);

    result = a1 + (nth - 1) * ratio;
    printf("%d until %d with ratio %d is %d", a1, nth, ratio, result);


    return 0;
}
