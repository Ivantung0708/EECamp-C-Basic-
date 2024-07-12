#include<stdio.h>

int add(int a, int b) {
    return a + b;
}
void hello() {
    printf("hello\n");
}
int main() {
    printf("%d\n", add(5,10));
    hello();
}