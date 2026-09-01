int totalMoney(int n) {
    int total=0;
    int week=1;
    
    while(n>0){
        int days=n<7?n:7;

        for(int i=0;i<days;i++){
            total+=week+i;
        }
        week++;
        n-=days;
    }
    return total;
   
}