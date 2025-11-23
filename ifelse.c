// Selection statement (if, if-else, if-else-if, nested-if)

#include<stdio.h>

int main (){
    int age;
    printf("enter the age");
    scanf("%d" , &age);

    if(age>=18){
        printf("Adult");
    }
    else if(age>13 && age<18){
        printf("Teenager ");
    }
    else {
        printf("child");
    }
    return 0;
}

// Create a grading systum using if-else-if ladder.

#include<stdio.h>
int main() {
    int marks;
    printf("enter the marks:");
    scanf("%d", &marks );

    if (marks >= 90) {
        printf("GRADE A");
    }
    else if (marks >= 80 && marks <90) {
        printf("GRADE B");
    }
    
    else if (marks >=70 && marks <80) {
        printf("GRADE C");
    }

    else  {
        printf("FAIL");
    }
    
    return 0;

}

// Nested if statement.

#include<stdio.h>
int main() {
int percentage = 75 , ID =1;

if (percentage >= 75) {
    if (ID == 1) {
        printf("ELIGIBLE");
    }
}
else
printf(" NOT ELIGIBLE");

return 0;
}