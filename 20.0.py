# ------------------------------------------------------------------------------
# PROBLEM #20: https://projecteuler.net/problem=20                             |
# ------------------------------------------------                             |
#                                                                              |
#   n! means n × (n − 1) × ... × 3 × 2 × 1                                     |
#                                                                              |
#   For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,                     |
#   the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27. |
#                                                                              |
#   Find the sum of the digits in the number 100!                              |
#                                                                              |
# ------------------------------------------------------------------------------

# CODE:
# --------------------------------------

total_product = 1 
for i in range(1, 101):                 # get total product of all nums 1-100
    total_product *= i

total_sum = 0
for i in str(total_product):            # get total sum of each digit in product
    total_sum += int(i)

print(total_sum)                        # print the cumulative sum


# ANSWER: 
# --------------------------------------
#       648
