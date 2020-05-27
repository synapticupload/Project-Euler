ones_words =    [   'one', 'two', 'three', 'four', 'five', 
                    'six', 'seven', 'eight', 'nine']
teens_words =   [   'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen',
                    'sixteen', 'seventeen', 'eighteen', 'nineteen'  ]
tens_words =    [   'ten', 'twenty', 'thirty', 'forty', 'fifty',
                    'sixty', 'seventy', 'eighty', 'ninety']

def num2words(x):
    string = ''
    if (x % 1000 == 0):
        return 'one thousand'
    if (x % 100 == 0):
        return ones_words[int(x / 100) - 1] + ' hundred'
    if (x >= 100 and x <= 999):
        string += ones_words[int(x / 100) - 1] + ' hundred'
        if (x % 100 < 10):
            string += ' and ' + ones_words[(x % 100) - 1]
            return string 
        if (x % 100 >= 11 and x % 100 <= 19):
            string += ' and ' + teens_words[(x % 100) - 11]
            return string
        if (x % 10 == 0):
            string += ' and ' + tens_words[int((x % 100) / 10) - 1]
            return string
        string += ' and ' + tens_words[int((x % 100)/10) - 1]
        string += '-'   + ones_words[int(x % 10) - 1]
        return string
    if (x <= 99 and x % 10 == 0):
        return tens_words[int(x / 10) - 1]
    if (x < 10):
        return ones_words[x - 1]
    if (x >= 11 and x <= 19):
        return teens_words[x - 11]
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

