#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

struct Person 
{
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
};
void swap(struct Person *a, struct Person *b); 
void sortNames(struct Person people[], int n); 
int main(void) 
{
    int n;
    printf("Enter the number of people: ");
    scanf("%d", &n);
    struct Person people[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", people[i].name);
        printf("Enter address for person %d: ", i + 1);
        scanf("%s", people[i].address);
    }
    sortNames(people, n);
    printf("\nSorted List:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Name: %s\t Address: %s\n", people[i].name, people[i].address);
    }
}
void swap(struct Person *a, struct Person *b) 
{
    struct Person temp = *a;
    *a = *b;
    *b = temp;
}
void sortNames(struct Person people[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (strcmp(people[j].name, people[j + 1].name) > 0) 
            {
                swap(&people[j], &people[j + 1]);
            }
        }
    }
}
