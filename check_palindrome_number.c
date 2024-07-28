bool isPalindrome(int x) {
    long int reverse=0;
    int org_number = x;
    if(x<0)
        return false;

    while(x!= 0){
        reverse = reverse*10 + x%10;
        x = x/10;
    }
    printf("%d %d", reverse, org_number);
    if (reverse == org_number)
        return true; 
    else 
        return false;
} 
