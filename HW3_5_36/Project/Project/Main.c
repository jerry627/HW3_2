#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

int hanoi(int);
void hanoi_step(int, char, char, char);
int main() {
    int n, ans;
    printf("請輸入河內塔的層數n: ");
    scanf("%d", &n);
    ans = hanoi(n);
    printf("移動完 %d 層的河內塔要花: %d 步\n", n, ans);
    printf("移動步驟如下:\n");
    hanoi_step(n, 'A', 'B', 'C');
    system("pause");
    return 0;
}
int hanoi(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return 2*hanoi(n - 1) + 1;
}
void hanoi_step(int n, char from, char aux, char to) 
{
    if (n == 1) {
        printf("從 %c 移到 %c\n", from, to);
    }
    else {
        hanoi_step(n - 1, from, to, aux);
        printf("從 %c 移到 %c\n", from, to);
        hanoi_step(n - 1, aux, from, to);
    }
}