a=eval(input("enter a number: "))   
b=eval(input("enter a number: "))  
c=eval(input("enter a number: "))  
d=b*b - 4*a*c
if(a==0):
    print("Not a Quadratic Equation")
elif(d>0):
    r1=(((-b)+(d**.5))/(2*a))
    r2=(((-b)-(d**.5))/(2*a))
    print("Roots are real and roots are {} {}".format(r1,r2))
elif (d==0):
    r=((-b)/(2*a))
    print("roots are real and equal {}".format(r))
else:
   d=-1*d
   i1=((d**.5)/(2*a))
   t1=((-b)/(2*a))
   real=complex(t1,i1)
   print(real)
   img=real.conjugate()
   print(img)