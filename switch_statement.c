// Switch statement example 1 -->

#include<stdio.h>
int main() {
    int x = 18;
    switch(x) {
        case 5:
        printf("Hello");
        break;

        case 18:
        printf("Hii");
        break;

        default:
        printf("Wrong Input");
    }
    return 0;

}                               // Output --> Hii

// Switch statement ex -->2

#include<stdio.h>
int main() {
    int age;
    printf("Enter the age b/w 50 to 100:");
    scanf("%d", &age);

    switch(age) {
        case 86:
        printf("ELIGIBLE");
        break;

        case 'a':                    // Ascii code of 'a' is consider that is 97.
        printf("ELIGIBLE");
        break;

        case 'A':                   // Ascii code of 'A' is consider that is 65.
        printf("ELIGIBLE");
        break;

        default:
        printf("NOT ELIGIBLE");
    }
    return 0;
}