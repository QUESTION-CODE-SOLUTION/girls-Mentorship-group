bool isPalindrome(int x) {
        if(x < 0)
{
return false;
}

    long long n = x;
    
    long long reqNum = 0, remainder;
    
    while(x != 0)
    {
        remainder = x%10;
        reqNum = (reqNum*10)+remainder;
        x /= 10;
    }
    
    if(reqNum == n)
    {
        return true;
    }
    
    return false;
}
    
