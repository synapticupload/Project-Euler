# ------------------------------------------------------------------------------
# If the numbers 1 to 5 are written out in words: 
#     one, two, three, four, five... 
#     ... then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
# 
# If all the numbers from 1 to 1000 (one thousand) inclusive,
#     were written out in words, how many letters would be used?
# 
# NOTE: Do not count spaces or hyphens. For example: 
#     342 (three hundred and forty-two) contains 23 letters 
#     115 (one hundred and fifteen) contains 20 letters. 
# 
#     The use of "and" when writing numbers is in compliance w/British usage.
# ------------------------------------------------------------------------------


ones_words =    [   'one', 'two', 'three', 'four', 'five', 
                    'six', 'seven', 'eight', 'nine']
teens_words =   [   'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen',
                    'sixteen', 'seventeen', 'eighteen', 'nineteen'  ]
tens_words =    [   'ten', 'twenty', 'thirty', 'fourty', 'fifty',

def num2words(x):
    string = ''
    # I thought it made sense to start at 1000 and work my way down as needed.

    # I have to handle the number for each 'special range'
    # plan is to assess the range of the number, and then build string accordingly.

    if (x % 1000 == 0):
        return 'one thousand'
    if (x >= 100 and x <= 999):
