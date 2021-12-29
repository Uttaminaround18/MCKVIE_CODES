rows = int(input("Number of rows:"))

column = int(input("Number of columns:"))



matrix = []

print("Enter the elements row-wise:")


for i in range(rows):

    a = []

    for j in range(column):

        a.append(int(input()))

    matrix.append(a)

max1 = list()
for i in matrix:
    print(i)
    max1 = max1 + [max(i)]
print(max(max1))
    
    