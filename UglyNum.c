// [Medium]
// With Binary Search
long gcd(long pLhs, long pRhs) {    // greatest common divisor 
    return pLhs ? gcd(pRhs % pLhs, pLhs) : pRhs;
}

long lcm(long pLhs, long pRhs) {
    return pLhs * pRhs / gcd(pLhs, pRhs);
}

int uglyNumbers(long m, long a, long b, long c) {
    long lcmab = lcm(a, b),lcmac = lcm(a, c),lcmbc = lcm(b, c),lcmabc = lcm(lcmab, c);   // least common multiple    
    return (int)(m / a + m / b + m /c - m / lcmab - m / lcmac - m / lcmbc + m / lcmabc);
}

int nthUglyNumber(int n, int a, int b, int c){
    int l = 1, r = 2e9;
    while(l < r) 
    {
        // Binary Search method
        int mid = l + (r - l) / 2;
        if (uglyNumbers(mid, a, b, c) >= n)
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}
