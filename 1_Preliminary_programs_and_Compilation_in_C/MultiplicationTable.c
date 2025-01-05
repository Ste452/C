#include <stdio.h>


int main ()

{
    int number, result;
    printf("Enter number: ");
    scanf("%d", &number);

    printf("Multiplication Table of %d\n", number);

    for(int i = 1; i <= 10; i++) {

        result = number * i;
        printf("%d x %d = %d\n", number, i, result);
    }

    return 0;
}
