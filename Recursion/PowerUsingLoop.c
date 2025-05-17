// PowerUsingLoop.c
#include <stdio.h>
int Power(int m, int n)
{
    int j = 1;
    if (n == 1) return m;
    for (int i = 1; i <= n; i++)
    {
        j = m * j;
    }
    return j;
}
int main()
{
    int x, y;
    printf("Enter the Base: ");
    scanf("%d", &x);

    printf("Enter the Power: ");
    scanf("%d", &y);

    // Power(x,y);
    printf("%d", Power(x, y));
    return 0;
}
