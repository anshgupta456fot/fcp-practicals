#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char c;
    FILE* fp;
    
    // Open the file in append mode ("a+")
    fp = fopen("practical.txt", "a+");

    // Check if the file was opened successfully
    if (fp == NULL)
    {
        printf("Error opening the file.\n");
        return 1; // Return an error code
    }
    else
    {
        printf("File opened successfully.\n");
    }

    // Append data to the file
    fputs("now appending\n", fp);

    // Rewind the file pointer to the beginning
    rewind(fp);

    // Read and display the content of the file
    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }

    // Close the file
    fclose(fp);

    return 0;
}
