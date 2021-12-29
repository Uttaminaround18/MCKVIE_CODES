s = input("Enter a sentence: ")

up = 0
lw = 0
for x in s:
    if  65<=ord(x)<=90:
        up = up + 1

    if 97<=ord(x)<=122:
        lw = lw + 1

print(up, lw)


