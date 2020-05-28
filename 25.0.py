# ------------------------------------------------------------------------------
# PROBLEM #25: https://projecteuler.net/problem=25                             |
# ------------------------------------------------------------------------------
#                                                                              
#     The Fibonacci sequence is defined by the recurrence relation:
#
#     F1 = 1
#     F2 = 1
#     F3 = 2
#     F4 = 3
#     F5 = 5
#     F6 = 8
#     F7 = 13
#     F8 = 21
#     F9 = 34
#     F10 = 55
#     F11 = 89
#     F12 = 144
#
#     The 12th term, F12, is the first term to contain three digits.
#     What index is the first term to contain 1000 digits?
# ------------------------------------------------------------------------------

# CODE:
# --------------------------------------

def fib(x):                             # define fib function
    curr = 0
    prev = 1

    for i in range (1, x+1):            # for range between 1 and indicated index
        curr = prev + curr              #   ... calculuate the
        prev = curr - prev              #   ... fibonacci number

        if (len(str(curr)) >= 1000):    # if it contains 1000+ digits
            print(i)                    #   ... print and 
            return                      #   ... then exit the program.

fib(5000)           # call 

# ANSWER: 
# --------------------------------------
#     4782       
