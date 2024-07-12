#include<stdio.h>

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        arr[i] = i;
    }
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int arr2[3][4];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            arr2[i][j] = i*j + i;
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}