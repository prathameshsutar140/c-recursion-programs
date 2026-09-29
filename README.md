# C Recursion Programs

A collection of basic C programs demonstrating problem-solving using **recursion**.

## Programs Included

### 1. String Reversal (`print.c`)
Reverses a string entered by the user using a recursive call to traverse characters until the null character (`\0`) is reached[cite: 8].

* **Key Function:** `reverse(char *str)`[cite: 8]

### 2. Recursive Multiplication (`rec.c`)
Calculates the product of two numbers using repeated addition via recursion without relying on the multiplication operator[cite: 9].

* **Key Function:** `multiply(int a, int b)`[cite: 9]

### 3. Linked List Print in Reverse (`rev.c`)
Builds a singly linked list and prints its elements in reverse order using recursive call stack traversal[cite: 10].

* **Key Functions:** `insertAtEnd()`, `printReverse()`[cite: 10]

---

## Technical Note
These source files use Turbo C / MS-DOS legacy functions (`<conio.h>`, `clrscr()`, `getch()`)[cite: 8, 9, 10]. If compiling with modern GCC:
* Replace `void main()` with `int main()`[cite: 8, 9, 10]
* Remove `clrscr()` and `getch()`[cite: 8, 9, 10]
