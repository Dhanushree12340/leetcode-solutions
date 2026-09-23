#include <stdio.h>

int main()
{
    int prices[] = {7, 6, 4, 3, 1};
    int n = 5;

    int minPrice = prices[0];
    int maxProfit = 0;
    int i, profit;

    for (i = 1; i < n; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        profit = prices[i] - minPrice;

        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}