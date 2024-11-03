#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

int hanoi(int);
void hanoi_step(int, char, char, char);
int main() {
    int n, ans;
    printf("�п�J�e���𪺼h��n: ");
    scanf("%d", &n);
    ans = hanoi(n);
    printf("���ʧ� %d �h���e����n��: %d �B\n", n, ans);
    printf("���ʨB�J�p�U:\n");
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
        printf("�q %c ���� %c\n", from, to);
    }
    else {
        hanoi_step(n - 1, from, to, aux);
        printf("�q %c ���� %c\n", from, to);
        hanoi_step(n - 1, aux, from, to);
    }
}