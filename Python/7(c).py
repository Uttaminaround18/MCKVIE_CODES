# s = input("Enter a words seperated by comma: ")
# l1 = s.split(",")
# l2 = sorted(l1)
# for x in l2:
#     print(x, end=",")
# print()

a=input("enter your email:")
b=a.index('@')
c=a.index('.')
i=a[b+1:c]
print(i)
