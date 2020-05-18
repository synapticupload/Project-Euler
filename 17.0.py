ones_words =    [   'one', 'two', 'three', 'four', 'five', 
                    'six', 'seven', 'eight', 'nine']
teens_words =   [   'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen',
                    'sixteen', 'seventeen', 'eighteen', 'nineteen'  ]
tens_words =    [   'ten', 'twenty', 'thirty', 'fourty', 'fifty',
                    'sixty', 'seventy', 'eighty', 'ninety']

def num2words(x):
    string = ''
    # I thought it made sense to start at 1000 and work my way down as needed.

    # I have to handle the number for each 'special range'
    # plan is to assess the range of the number, and then build string accordingly.

    if (x % 1000 == 0):
        return 'one thousand'
    if (x >= 100 and x <= 999):
