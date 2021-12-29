class SqrArea:
    def cal_area(self,l):
        return self.l ** 2        

class SqrPeri:
    def cal_peri(self,l):
       return 4 * self.l

class Sqr(SqrArea,SqrPeri):
    def __init__(self,l=None):
        if l is None:
            self.l = eval(input("Enter a number: "))

    def show(self):
        print(super().cal_area(self.l))
        print(super().cal_peri(self.l))

s = Sqr()
print(isinstance(s,Sqr))

    

         
        
   

                