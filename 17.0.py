# QUESTION:
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
tens_words =    [   'ten', 'twenty', 'thirty', 'forty', 'fifty',
                    'sixty', 'seventy', 'eighty', 'ninety']

def num2words(x):
    string = ''

    # check if 1000
    if (x % 1000 == 0):
        return 'one thousand'

    # check if an even hundred
    if (x % 100 == 0):
        return ones_words[int(x / 100) - 1] + ' hundred'

    # handle 100+
    if (x >= 100 and x <= 999):

        # create 'hundreds' words - must have this at a minimum if 100+
        string += ones_words[int(x / 100) - 1] + ' hundred'
        
        # handle less than 10 after the hundreds (such as: 109, or 205)
        if (x % 100 < 10):
            string += ' and ' + ones_words[(x % 100) - 1]
            return string 
        
        # handle teens after the hundreds (such as: 915, 419, 212, or 111)
        if (x % 100 >= 11 and x % 100 <= 19):
            string += ' and ' + teens_words[(x % 100) - 11]
            return string
    
        # handle even 10s - just tack on a tens place word if divisible by 10
        if (x % 10 == 0):
            string += ' and ' + tens_words[int((x % 100) / 10) - 1]
            return string

        # handle 20+ (use modulus to get values for everything else)
        string += ' and ' + tens_words[int((x % 100)/10) - 1]
        string += '-'   + ones_words[int(x % 10) - 1]
        return string

    # handle 1-99 (the rest)

    # check if even 10 under 100
    if (x <= 99 and x % 10 == 0):
        return tens_words[int(x / 10) - 1]

    # handle 1-10
    if (x < 10):
        return ones_words[x - 1]

    # handle 11-19
    if (x >= 11 and x <= 19):
        return teens_words[x - 11]

    # handle 20+
    if (x >= 20 and x <= 99):
        string += tens_words[int(x / 10) - 1]
        string += '-' + ones_words[int(x % 10) - 1]
        return string

def countLetters(s):
    total = 0
    for i in s:
        if i.isalpha():
            total += 1
    return total

total = 0

for i in range(1, 1001):
    print(num2words(i) + "\t" + str(countLetters(num2words(i))))
    total += countLetters(num2words(i))
print(total)


# ANSWER: 21124
# ------------------------------------------------------------------------------
