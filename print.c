#include <stdio.h>
#include <conio.h>

void reverse(char *str) {
    if (*str == '\0') {
        return;
    }
    reverse(str + 1);
    printf("%c", *str);
}

void main() {
    char str[100];
    
    clrscr();

    printf("Enter a string: ");
    gets(str);

    printf("Reversed string: ");
    reverse(str);

    getch();
}