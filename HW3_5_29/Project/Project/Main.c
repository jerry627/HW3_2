#include<stdio.h>
#include<stdlib.h>

int lcm(int, int);
int gcd(int, int);
int main() {
    int n1,n2,ans;
    printf("�п�J��Ӿ��: ");
    scanf("%d%d", &n1,&n2);
    if (n1 > n2)
    {
        ans = lcm(n1, n2);
    }
    else
    {
        ans = lcm(n2, n1);
    }
    printf("�̤p�����ƬO: %d\n",ans);
    system("pause");
    return 0;
}

int gcd(int x, int y)
{
    if (y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}
int lcm(int x, int y)
{
    return x * y / gcd(x, y);
}