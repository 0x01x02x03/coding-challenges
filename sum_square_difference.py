sum_of_squares = 0
square_of_sum = 0
i = 0
while i < 100:
    i += 1

    sum_of_squares += (i ** 2)
    square_of_sum += i
square_of_sum = square_of_sum ** 2

difference = square_of_sum - sum_of_squares
print("Sum of squares: ", sum_of_squares)
print("Square of sum: ", square_of_sum)
print("Differnce: ", difference)
