a = []
n = int(input("Enter the list size: "))

print("Enter the element of the list")
for i in range(0,n):
    item = int(input())
    a.append(item)


# max = 0
# for x in a:
#     if x>max:
#         max = x

    
# print("The largest numer in the list is {}".format(max))

print("The orginal list is {}".format(a))

res = []
[res.append(x) for x in a if x not in res ]

print("The list after after removal of dublicating characters is {}".format(res))






