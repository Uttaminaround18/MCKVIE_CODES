a = int(input("Enter the Consumption Units : "))
if a>0 and a<=200:
    bill=a*0.50

elif a>=201 and a<=400:
    bill=100+a*0.65

elif a>=401 and a<=600:
    bill=200+a*0.80

else:
    bill=300+a*1.00

print(bill, 'is the amount to be paid')                     
