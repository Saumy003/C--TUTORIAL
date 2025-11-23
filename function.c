#include<stdio.h>

void printHello();            // ------> function declaration

int main() {
    printHello();            //-------> function call
    printHello();
    printHello();
    return 0;
}

// function defination or body

void printHello() {
    printf("Hello! \n");
}


#include<stdio.h>
void fun() ;
void m1() {
    printf("m1");                          // step 2
}
void fun() {
    printf("fun");                         // step 1 
    m1();
    printf("after function call");         // step 3
}
int main () {
    int i =1;
    fun();                                  
    int a2 = printf("Happy coding");         // step 4
    return 0;
}


#include<stdio.h>
int sum(int a , int b) {
return a + b;                 // return statement will return 30
}
int main () {
    int num1 = 10 , num2 = 20 , add ;
    add = sum(num1 , num2);
    printf("addition : %d", add);
    return 0;
}