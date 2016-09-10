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
    counter = 0
    while not exists:
        number += 1
        factors = prime_factors(number)
        if len(factors) == 1 and factors[0] == number:
            counter += 1
            if counter == 10001:
                print(number)
                exists = True
        else:
            pass
if __name__ == '__main__':
    generate()
