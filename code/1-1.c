#include <stdio.h>
int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a * b;
}
int div(int a, int b){
    return a / b;
}
int main(void){
    int a = 10, b=5;
    printf("a + b = %d\n", add(a, b));
    printf("a - b = %d\n", sub(a, b));  
    printf("a * b = %d\n", mul(a, b));
    printf("a / b = %d\n", div(a, b));

    return 0;
}
