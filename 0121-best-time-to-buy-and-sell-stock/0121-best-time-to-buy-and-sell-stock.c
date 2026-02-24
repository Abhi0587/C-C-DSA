int maxProfit(int* prices, int pricesSize)
{
    int minPrice = 100000;   // large initial value
    int maxProfit = 0;

    for(int i = 0; i < pricesSize; i++)
    {
        // keep track of lowest price so far
        if(prices[i] < minPrice)
            minPrice = prices[i];

        // calculate profit if selling today
        int profit = prices[i] - minPrice;

        if(profit > maxProfit)
            maxProfit = profit;
    }

    return maxProfit;
}