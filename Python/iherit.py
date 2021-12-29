# Multilevel inheritance
class Stline:
    def __init__(self, l=None):
        if l is None:
            self.l = eval(input("Enter a number : "))
        else:
            self.l = l  

        print("Stline object is created")                      
            
           

class Square(Stline):
    def __init__(self):
        super().__init__()
        print("Square object is  created")    
        
    def calc_area(self):
        return self.l ** 2
        
class Cube(Square):
    def __init__(self,h=None):
        if h is None:
            self.h = eval(input("Enter the height of the cube: "))
        else:
            self.h = h
        super().__init__()
        print("Cube object is created")


    def calc_area(self):
        return 6 * super().calc_area()


s = Square()
print(s.calc_area())

c = Cube()
print(c.calc_area())
       




                



            



     




        