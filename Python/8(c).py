N = int(input("Enter the number of times you want to rotate list: "))
n = int(input("Enter the number of elements of the list: "))
lst = []

for i in range(n):
    i = int(input())
    lst.append(i)

print("The original list is {}".format(lst))    


l = len(lst);
print(l)


lst1 = lst[0:N]
lst2 = lst[N:l]

lst3 = lst2 + lst1
print(lst3)

# rotate to the right



