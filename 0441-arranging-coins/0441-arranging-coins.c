int arrangeCoins(int n) {
    long long rows=1;
    long long coins=0;

    while(coins+rows<=n){
        coins=coins+rows;
        rows++;
    }
    return rows-1;
}