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


def generate():
    exists = False
    number = 0
    sum = 0
    while not exists:
        number += 1
        factors = prime_factors(number)
        if len(factors) == 1 and factors[0] == number:
            if number < 2e6:
                sum += number
            else:
                exists = True
        else:
            pass
    return sum

if __name__ == '__main__':
    print(generate())
