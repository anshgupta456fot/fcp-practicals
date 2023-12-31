#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int type; 
    void *data;
} GenericData;

GenericData* createGenericData(int type, void *data); 
void printGenericData(GenericData *container);
void freeGenericData(GenericData *container);

int main(void)
{
    int intData = 42;
    float floatData = 3.14;
    char charData = 'A';
    char *stringData = strdup("Hello, World!");
    GenericData *intContainer = createGenericData(0, &intData);
    GenericData *floatContainer = createGenericData(1, &floatData);
    GenericData *charContainer = createGenericData(2, &charData);
    GenericData *stringContainer = createGenericData(3, stringData);
    printGenericData(intContainer);
    printGenericData(floatContainer);
    printGenericData(charContainer);
    printGenericData(stringContainer);
    freeGenericData(intContainer);
    freeGenericData(floatContainer);
    freeGenericData(charContainer);
    freeGenericData(stringContainer);
}

GenericData* createGenericData(int type, void *data) 
{
    GenericData *container = (GenericData*)malloc(sizeof(GenericData));
    container->type = type;
    container->data = data;
    return container;
}
void printGenericData(GenericData *container) 
{
    switch (container->type) {
        case 0: // int
            printf("%d\n", *(int*)(container->data));
            break;
        case 1: // float
            printf("%f\n", *(float*)(container->data));
            break;
        case 2: // char
            printf("%c\n", *(char*)(container->data));
            break;
        case 3: // string
            printf("%s\n", (char*)(container->data));
            break;
        default:
            printf("Unknown data type\n");
    }
}
void freeGenericData(GenericData *container) 
{
    free(container->data);
    free(container);
}