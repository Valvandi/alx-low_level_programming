/**
 * print_name - function to print name
 *
 * @name: name to print
 * @f: function pointer that doesn't return anything
 *
 * Return: Always 0 (Success)
*/


#include <stdio.h>

void print_name(char *name, void (*f)(char *)) {
    f(name);
}


void print_normal(char *name) {
    printf("Name: %s\n", name);
}


void print_reverse(char *name) {
    printf("Reversed Name: ");
    for (int i = strlen(name) - 1; i >= 0; i--) {
        putchar(name[i]);
    }
    printf("\n");
}

int main() {
    char myName[] = "John Doe";

    print_name(myName, print_normal);
    print_name(myName, print_reverse);

    return 0;
}

