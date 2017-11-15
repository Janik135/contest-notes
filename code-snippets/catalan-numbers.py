def binomialCoefficient(n, k):
    if k > n - k:
        k = n - k

    result = 1

    for i in range(k):
        result *= n - i
        result /= i + 1
    return int(result)

def catalan(n):
    c = binomialCoefficient(2*n, n)
    return int(c / (n + 1))
