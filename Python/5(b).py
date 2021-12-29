import math as m
for i in range(100, 1000):
    s = 0
    j = i
    while j>0:
        rem = j%10
        s = s + m.factorial(rem)
        j = j//10

    if i == s:
        print("{} is a Special Number".format(i))
   



