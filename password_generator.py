import random
import string

def main():
    print("[*] Welcome to password generator.")
    while True:
        global length
        length = int(input("[*] Enter how long would you like your password to be: "))
        if length < 8:
            print("[*] Secure password should be longer than 8 characters. Please try again.")
        else:
            break
    generate(length)


def generate(x):
    password = ''.join(random.SystemRandom().choice(string.ascii_letters + string.punctuation + string.digits) for _ in range(x))
    check(password)


def check(password):
    lower = sum(1 for letter in password if letter.islower())
    upper = sum(1 for letter in password if letter.isupper())
    digit = sum(1 for letter in password if letter.isnumeric())
    special = sum(1 for letter in password if letter in string.punctuation)

    if lower > 0 and upper > 0 and digit > 0 and special > 0:
        print("[*] Your password has been generated: " + ''.join(password))
        print("[*] Lowercase: %s" % (lower))
        print("[*] Uppercase: %s" % (upper))
        print("[*] Digits: %s" % (digit))
        print("[*] Special characters: %s" % (special))
    else:
        generate(length)


if __name__ == '__main__':
    main()
