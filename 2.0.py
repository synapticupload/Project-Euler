prev = 0
curr = 1
next = 2
total = 0

max = 4000000
while (next <= max):
    prev = curr
    curr = next

    if (curr % 2 == 0):
        total += curr

    next = curr + prev 

print("TOTAL  : " + str(total))
