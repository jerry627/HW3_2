#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

unsigned long long int fibonacci(unsigned int);
int main() {
    int n,ans;
    printf("���t�ί�]�X���̤j�ȬO�� 46 �쪺�O�i������:1836311903\n");
    printf("�п�J��n��O�i������: ");
    scanf("%d", &n);
    ans = fibonacci(n);
    printf("�� %d �쪺�O�i�����ƬO: %d\n", n, ans);
    system("pause");
    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int result=0,a=0,b=1;
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            result = a + b;
            a = b;
            b = result;
        }
        return result;
        //return fibonacci(n - 1) + fibonacci(n - 2);���j�g�k
    } 
}