

int reverse(int x){
    if( x > pow(2,31) - 1 || x < pow(-2,31) )
        return 0;
    int a,b;
    while(x != 0){
        b = b * 10 + x % 10;    // mirroring
        x /= 10;
    }
    return b;
}
