#include<stdio.h>

int main() {
    int age = 22;
    int *prt = &age;

    // address
    printf("%p\n", &age); // this is called formate specifier.
    printf("%p\n", &prt);
    printf("%p\n", &prt);
    return 0;

}