#include <stdio.h>

int main(void)
{
    int n, m, i;
    float a, b, c;
    printf("計算回数は\n");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        printf("1＝足し算\n2＝引き算\n3＝掛け算\n4＝割り算\n計算方法は");
        scanf("%d\n", &n);
        switch (n)
        {
        case 1:
            scanf("%f\n", &a);
            scanf("%f\n", &b);
            c = a + b;
            printf("%f\n", c);
            break;
        case 2:
            scanf("%f\n", &a);
            scanf("%f\n", &b);
            c = a - b;
            printf("%f\n", c);
            break;
        case 3:
            scanf("%f\n", &a);
            scanf("%f\n", &b);
            c = a * b;
            printf("%f\n", c);
            break;
        case 4:
            scanf("%f\n", &a);
            scanf("%f\n", &b);
            c = a / b;
            printf("%f\n", c);
            break;
        }
    }
}
