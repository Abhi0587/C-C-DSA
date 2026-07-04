int getsum(int n){
    int sum=0;

    while(n>0){
        int rem=n%10;
        sum=sum+rem*rem;
        n/=10;
    }
    return sum;
}



bool isHappy(int n) {

    int slow=n;
    int fast=n;
    do{
        slow=getsum(slow);
        fast=getsum(getsum(fast));
    }while(slow!=fast);

    return slow==1;
    
}