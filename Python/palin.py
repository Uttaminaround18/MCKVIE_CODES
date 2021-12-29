
for i in range(100, 1000):
    s = i
    rev = 0

    while i>0:
        rem = i%10
        rev = rev*10+rem
        i = i//10

    if rev == s:
        print("{} is Palindrome number".format(s))
    else:
        print("{} is Not a palindrome Number".format(s))
