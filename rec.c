#include <stdio.h>
#include <conio.h>

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b > 0) {
        return (a + multiply(a, b - 1));
    }
    return -multiply(a, -b);
}

void main() {
    int num1, num2, result;
    clrscr();

    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    result = multiply(num1, num2);

    printf("Product = %d\n", result);

    getch();
}