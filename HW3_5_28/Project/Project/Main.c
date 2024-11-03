#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

int main() {
    char ch;
    printf("請輸入一個字母: ");
    scanf("%c", &ch);
    if (islower(ch))
    {
        ch = toupper(ch);
    }
    else
    {
        ch = tolower(ch);
    }
    printf("調換大小寫後的字母是: %c\n", ch);
    system("pause");
    return 0;
}