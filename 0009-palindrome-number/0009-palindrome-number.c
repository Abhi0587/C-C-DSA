bool isPalindrome(int x) {
    long long rev=0;
    int temp,orinum=x;

    if(x<0)
    return false;

    while(x>0)
    {
        temp=x%10;
        rev=rev*10+temp;
        x=x/10;
    }
    return(rev==orinum);
    
}