#include<stdio.h>

void print_option() {
    //TODO:輸出5種選項
    //1 加法
    //2 減法
    //3 乘法
    //4 除法
    //5 退出
}

int main() {
    int choice;
    int num1, num2, result;
    while(1) {
        print_option();
        scanf("%d", &choice);//輸入選項
        //TODO:如果選項為退出，則直接終止程式
        if (choice == 5) {
            printf("GoodBye");
        }
        //並輸出GoodBye
        printf("Please enter two numbers:");//告訴使用者輸入兩個數字
        scanf("%d %d", &num1, &num2);//輸入兩個數字
        //TODO:根據選項及輸入的數字，輸出結果
        //若使用者的輸入錯誤，告訴使用者錯誤並重新回到初始畫面
        //當使用者在除法時除以0也要告訴使用者這是不合法的
        if (choice == 1) {

        }
        else if (choice == 2) {

        }
        else if (choice == 3) {

        }
        else if (choice == 4) {
            if(num2 == 0) {
                printf("0 division is not allowed\n");
            }
        }
        else {
            printf("Error: Invalid choice. Please enter again\n");
        }
    }
}