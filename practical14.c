
//string handling using function
#include<stdio.h>
#include<string.h>

void pallindrome(char strings[]);
int string_length(char strings[]);
void string_concatination(char strings[]);
int main(void)
{
    int choice,length;
    char strings[1000000];
    
    do
    {
        printf("enter 1 for checking whether the given string is pallindrome or not\n");
        printf("enter 2 for computing the length of the string\n");
        printf("enter 3 for strings concatination\n");
        printf("enter your choice");
        scanf("%d",&choice);
    }
    while(choice<1||choice>=4);
    getchar();
    printf("enter a string: ");
    fgets(strings,sizeof(strings),stdin);
    strings[strcspn(strings, "\n")] = '\0';
    if(choice==1)
    {
        pallindrome(strings);
    }
    else if(choice == 2)
    {
        length = string_length(strings);
        printf("the length of the string is:%d",length);
    }
    else if(choice==3)
    {
       
       
        string_concatination(strings);
    }
    
}
void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void pallindrome(char strings[]) {
    char revString[1000000];
    strcpy(revString, strings);
    reverseString(revString);
    
    if (strcmp(revString, strings) == 0) {
        printf("The following string is palindrome.\n");
    } else {
        printf("Not palindrome.\n");
    }
}
// void pallindrome(char strings[])
// {
//     char rev_string[10000];
//     int result;
//     strcpy(rev_string,strrev(strings));
//     printf("%s",rev_string);
//     if (strcmp(rev_string, strings) == 0) {
//         printf("The following string is palindrome.\n");
//     } else {
//         printf("Not palindrome.\n");
//     }
// }

int string_length(char strings[])
{
    return(strlen(strings));
}
void string_concatination(char strings[])
{
    char newstring[1000000];
    printf("enter another string: ");
    fgets(newstring,sizeof(newstring),stdin);
    newstring[strcspn(newstring, "\n")] = '\0';
    strcat(strings,newstring);
    printf("after string concatination:\n");
    printf("new string: %s",strings);
}
