#include<stdio.h>
#include<stdlib.h>

double power(double,int);

int main() {
    int n;
    double ans,x;
    printf("�p��x��n����?�п�Jx,n\n");
    scanf_s("%lf%d", &x,&n);
    ans = power(x, n);
    printf("%.3lf��%d����=%.3lf\n", x, n, ans);
    system("pause");
    return 0;
}

double power(double x, int n)
{
    if (n >= 1)
    {
        return x*power(x, n - 1);
    }
    else
    {
        return 1;
    }
}