# https://projecteuler.net/problem=21
# ------------------------------------------------------------------------------
# Let d(n) be defined as the sum of proper divisors of n 
#    (numbers less than n which divide evenly into n).
#
# If    d(a) = b  , 
# and   d(b) = a  , 
# where   a ≠ b   , 
#
#   then a and b are an amicable pair, 
#   and each of a and b are called amicable numbers.
# 
# For example, 
#   the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; 
#   therefore d(220) = 284. 
#   The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
# 
# Evaluate the sum of all the amicable numbers under 10000.
#
# ------------------------------------------------------------------------------
#

def d(n):
    sum = 0
    for i in range(1, n, 1):
        if ((n % i) == 0):
            sum += i
    return sum

amicSum = 0
lst = []
for a in range(1, 10000):
    b = d(a)
    if (d(b) == a):
        if (a != b):
            lst.append(a) if a not in lst else lst
            lst.append(b) if b not in lst else lst

finalSum = 0
for i in lst:
    finalSum += i
    
print(finalSum)
