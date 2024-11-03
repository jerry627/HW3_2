#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

unsigned long long int fibonacci(unsigned int);
int main() {
    int n,ans;
    printf("本系統能跑出的最大值是第 46 位的費波那契數:1836311903\n");
    printf("請輸入第n位費波那契數: ");
    scanf("%d", &n);
    ans = fibonacci(n);
    printf("第 %d 位的費波那契數是: %d\n", n, ans);
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
        //return fibonacci(n - 1) + fibonacci(n - 2);遞迴寫法
    } 
}