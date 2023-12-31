#include <stdio.h>
#include <string.h>
const int MAX = 4;

void print(char *pchr)
{
    printf("\n");
    // pchr[0]='k'; cant use this if const char *pchr is passed as argument
    while (*pchr != '\0')
    {
        printf("%c", *pchr);
        pchr++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    char str[] = "dev"; // sting gets stored in contiguous memory==array
    // char *str="hello"; string gets stored as compile time constant
    int size = sizeof(str);
    printf("Length is %d,Size is %d bytes\n", strlen(str), size);
    char *pc;
    pc = str;
    for (int i = 0; i < size; i++)
        printf("%c", *(pc + i));
    print(str);

    char *names[] = {"Samson", "Harish", "Nancy", "Saral"};
    int i = 0;
    for (i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n", i, names[i]);
    }

    return 0;
}