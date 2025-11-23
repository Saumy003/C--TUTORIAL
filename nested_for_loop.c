#include<stdio.h>
int main() {
    for(int i=1;i<3;i++){
        for(int j=1;j<3;j++){
            printf("%d %d\n", i,j);
        }
    }
    printf("Happy Coding");
    return 0;
}


#include<stdio.h>
int main() {
    for(int a=1;a<=3;a++){
        for(int b=5;b>=1;b--){
            printf("%d", b);
        }
    }
    printf("\n");
    return 0;
}


#include<stdio.h>
int main() {
    for(int a=1;a<=3;a++){
        for(int b=5;b>=1;b--){
            printf("%d\t", b);
            break;
        }
    }
    printf("\n");
    return 0;
}

#include<stdio.h>
int main() {
    for(int a=1;a<=3;a++){
        for(int b=5;b>=1;b--){
            printf("%d\t", b);
        }
        break;
    }
    printf("\n");
    return 0;
}