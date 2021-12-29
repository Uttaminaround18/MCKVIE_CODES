yr=int(input("Enter the year : "))
if yr%100!=0 and yr%4==0:
    print(yr,"is a leap year")
elif yr%400==0:
    print(yr,"is a leap year")
else:
    print(yr,"is not a leap year") 