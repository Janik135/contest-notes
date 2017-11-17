unsigned long gcd(unsigned long a, unsigned long b) {
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

unsigned long phi(unsigned long n) {
    unsigned long result = 1;
    for (unsigned long i=2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}
