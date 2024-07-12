#include<stdio.h>

int main() {
   char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
   char* str2 = "hello world\0";
   printf("%s\n%s", str, str2); 
}