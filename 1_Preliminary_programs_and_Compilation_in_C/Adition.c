
// Addition Program

#include <stdio.h>

// Main function initialize execution of program
int main(void)
{

    int integer1; // First number to be refer by user
    int integer2; // Second number to be refer by user
    int sum; // Variable that sum will be maintain

    printf("Enter a first integer number please: "); // Prompt
    scanf("%d", &integer1); // Reads an Integer

    printf("Enter a second integer number please: "); // Prompt
    scanf("%d", &integer2); //Reads an Integer

    sum = integer1 + integer2; // Attributes the total sum

    printf("The sum is %d\n", sum); // Sum print

    return 0; // Demonstrate that program has been finished with success
}
