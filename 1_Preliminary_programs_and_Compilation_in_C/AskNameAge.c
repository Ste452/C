#include <stdio.h>

int main() {
    char name[50]; // Characters of Array to store name.
    int age;

    printf("Enter name: ");
    scanf("%49s", name); // Max reads of 49 characters to avoid buffer burst.

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Hello %s, you are %d years old.\n", name, age);

    return 0;
}
