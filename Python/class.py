class StLine:
    def __init__(self,l=None):
        if l is None:
            self.length=eval(input("Enter the length:"))
        else:
            self.length=l
        print("Object of StLine has created")
class Square(StLine):
    def __init__(self,l=None):
        if l is None:
            super().__init__()
        else:
            super().__init__(l)
        print("Object of Square has created")
    def calc_area(self):
        return self.length*self.length
class Cube(Square):
    def __init__(self,h=None,l=None):
        if l is None:
            super().__init__()
        else:
            super().__init__(l)
        print("Object of Cube has created")
        if h is None:
            self.height=eval(input("Enter the value of hight:"))
        else:
            self.height=h
    def calc_area(self):
        return self.height*self.height*6
h=eval(input())
r=eval(input())
h1=Cube(h,r)
# h2=StLine(r)
h3=Square(r)
print(h1.calc_area())
print(h3.calc_area())