#include<stdio.h>

struct Student {
    int english;
    int math;
    int physics;
};
int main() {
    //WRITE YOUR CODE HERE!!!
    struct Student student1 = {
        .english = 100,
        .math = 95,
        .physics = 70,
    };
    printf("%d\n", student1.english);
}