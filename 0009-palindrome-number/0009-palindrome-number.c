bool isPalindrome(int x) {
    int orinum=x;
    long long rev=0;

    if(x<0)
    return false;
    while(x>0){
        int rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    return orinum==rev;
    
}