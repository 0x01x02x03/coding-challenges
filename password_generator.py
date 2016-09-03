import random
import string


def main(): # in main
    length = input("[*] Enter how long would you like your password to be: ")
    if length.isdigit():
        length = int(length)
    else:
        print("[*] Enter a number!")
        return
    password = generate(length)
    if check(password):
        print("[*] Your password has been generated: " + ''.join(password))
    else:
        main()

def generate(length):
    password = ''.join(random.SystemRandom().choice(string.ascii_letters + string.punctuation + string.digits) for _ in range(length))
    return password

def check(password):
    lower = sum(1 for letter in password if letter.islower())
    upper = sum(1 for letter in password if letter.isupper())
    digit = sum(1 for letter in password if letter.isnumeric())
    special = sum(1 for letter in password if letter in string.punctuation)

    if lower > 0 and upper > 0 and digit > 0 and special > 0:
        return True
    else:
        return False

if __name__ == '__main__':
    main()
