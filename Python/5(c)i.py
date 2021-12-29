n = int(input("Enter the number of lines: "))
half = n // 2 + 1
for i in range(half+1):
 print((" ")*(half-i)+("*")*(2*i-1))
for j in range(half-1, 0, -1):
 print((" ")*(half-j)+("*")*(2*j-1))

