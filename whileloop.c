#include<stdio.h>
int main() {
    int i = 1;
while(i<=5) {
    printf("Chiku \n");
    i++;
}
return 0;
}


// Program that count number of digit in the given number.
#include<stdio.h>
int main() {
    int num , count =0 , num1;
    printf("Enter a number: ");
    scanf("%d", &num);
    num1 = num;              // num1 is used for future uses if need currently num1 is not required. 
    while(num>0) {
        num = num/10;
        count++;
    }
    printf("%d", count);
    return 0;

}