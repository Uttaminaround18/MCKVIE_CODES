s1 = input("Enter a string: ")
s2 = input("Enter a string: ")
l1 = s1.split()
l2 = s2.split()
t1 = set(l1)
t2 = set(l2)
t3 = t1.intersection(t2)
for x in t3:
    print(x,end=" ")
