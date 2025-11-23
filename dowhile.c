#include<stdio.h>
int main() {
    int i = 5;
    do {
    printf("%d\n", i);
    i--;
    } while (i>=1);
    return 0;
}


#include<stdio.h>
int main () {
    int i = 1;
    do {
        printf("happy coding\n");
        i++;
    }  while (i<=5);
    printf("%d\n",i );
    return 0;
}


#include<stdio.h>
int main () {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    }  while (i=0);             // given condition is false but then also once the code will execute.
    printf("Happy Coding");
    return 0;                   // output :- 1  Happy coding
}
