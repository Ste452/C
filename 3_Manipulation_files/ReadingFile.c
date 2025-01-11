#include <stdio.h>

int main()
{
    FILE *fptr; // Pointer to the file
    char myString[256]; // Buffer to store the file contents

    // Open the file in read mode
    fptr = fopen("C:\\Users\\Micro\\Desktop\\Works\\Programming Works\\C_works\\C_project_of_learning\2_Manipulation_files\Direction_txtdata.txt", "rt");

    // Check if the file was opened correctly
    if (fptr == NULL)
    {
        printf("Error opening the file. Check the path or if the file exists.\n");
        return 1;
    }

    printf("File contents:\n");

    // Read and print line by line from the file
    while (fgets(myString, sizeof(myString), fptr) != NULL)
    {
        printf("%s", myString);
    }

    // Close the file
    fclose(fptr);

    return 0;
}
