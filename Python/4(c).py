n = int(input("Enter a number : "))
n2 = n
rev = 0

while n>0:
    rem = n%10
    rev = rev*10+rem
    n = n//10

if rev == n2:
    print("Palindrome number")
else:
    print("Not a palindrome Number")
