print("Automorphic numbers are:-")
for i in range(10,100):
    s=i*i
    r=s%100
    if r==i:
        print(i,end=" ")