def prime_factors(x):
    a = 2
    factors = []
    while a * a <= x:
        if x % a:
            a += 1
        else:
            x //= a
            factors.append(a)
    if x > 1:
        factors.append(x)
    return factors

print(prime_factors(60085147514321355213512512))
