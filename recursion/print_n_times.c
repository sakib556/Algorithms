#include <stdio.h>

void show(int n)
{
    printf("Hello\n");
    if (n == 1)
        return;
    return show(n - 1);
}

int main()
{
    int num;
    printf("Enter how many times it will print : ");
    scanf("%d", &num);
    show(num);

    return 0;
}
