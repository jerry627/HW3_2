#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

int main() {
    char ch;
    printf("�п�J�@�Ӧr��: ");
    scanf("%c", &ch);
    if (islower(ch))
    {
        ch = toupper(ch);
    }
    else
    {
        ch = tolower(ch);
    }
    printf("�մ��j�p�g�᪺�r���O: %c\n", ch);
    system("pause");
    return 0;
}