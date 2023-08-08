#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n)
{
    int V[n + 1][W + 1];

    for (int i = 0; i <= n; i++)
        V[i][0] = 0;

    for (int i = 0; i <= W; i++)
        V[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (wt[i - 1] > j)
                V[i][j] = V[i - 1][j];
            else
                V[i][j] = max(val[i - 1] + V[i - 1][j - wt[i - 1]], V[i - 1][j]);
        }
    }

    return V[n][W];
}

int main()
{
    int val[] = {0, 1, 2, 5, 6};
    int wt[] = {0, 2, 3, 4, 5};
    int W = 8;
    int n = sizeof(val) / sizeof(val[0]);

    int result = knapsack(W, wt, val, n);
    printf("Maximum value in Knapsack: %d\n", result);

    return 0;
}
