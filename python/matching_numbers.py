import string

# Numbers a and b are matching if (sum of divisors a - 1) == b and (sum of divisors b - 1) == a 

def main():
    number_a = input("Please enter number a: ")
    if number_a.isdigit():
        number_a = int(number_a)
    else:
        print("Enter a number!")
    number_b = input("Please enter number b: ")
    if number_b.isdigit():
        number_b = int(number_b)
    else:
        print("Enter a number!")
    sum_divisors_a = generate_divisor(number_a)
    sum_divisors_b = generate_divisor(number_b)
    if (sum_divisors_b - 1) == number_a and (sum_divisors_a -1) == number_b:
        print("Numbers are matching")
    else:
        print("Numbers not matching")

def generate_divisor(number):

    divisors = []
    for each_number in range(1, number):
        if number % each_number == 0:
            divisors.append(each_number)
        else:
            pass
    divisors_sum = sum(divisors)
    return divisors_sum


if __name__ == '__main__':
    main()
