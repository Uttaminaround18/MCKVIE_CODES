n = int(input("Enter number of terms : "))
a,b,i = 0,1,1
print("The Fibonacci Series is : ")
while i <= n:
    print(a,end = " ")
    c = a + b
    a = b
    b = c
    i += 1


