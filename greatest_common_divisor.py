def main():
    number_a = input("Please enter first number: ")
    number_b = input("Please enter second number: ")
    if number_a.isdigit():
        number_a = int(number_a)
    else:
        print("First number is not a number! ")
    if number_b.isdigit():
        number_b = int(number_b)
    else:
        print("Second number is not a number! ")
    greatest_common_divisor = int(eukidles_check(number_a, number_b))
    print("Greatest Common Divisor: %s " % (greatest_common_divisor))

    smallest_common_multiple = smallest_common_multiple_find(number_a, number_b, greatest_common_divisor)
    print("Smallest Common Multiple: %s " % (smallest_common_multiple))

def eukidles_check(a, b):
    while b != 0:
        c = a % b
        a = b
        b = c
    return a

def smallest_common_multiple_find(a, b, greatest_common_divisor):

    smallest_common_multiple = (a * b) / greatest_common_divisor
    return int(smallest_common_multiple)

if __name__ == '__main__':
    main()
