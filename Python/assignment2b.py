basic=eval(input("enter the basic pay drawn by the employee:"))
AGP=(basic)* 50/100
mrgbasic= AGP + basic
DA= (mrgbasic)* 50/100
HRA=(mrgbasic)* 15/100
T= AGP + DA + HRA + basic
total="{:.2f}".format(T)
print("Total salary drawn by the employee=",T)
