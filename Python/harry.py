class Dad:
    basketball =6

class Son(Dad):
    dance =1
    
    # def __init__(self):
    #     self.basketball = 3000

    def isdance(self):
        
        return f"Yes I dance {self.dance} no of times"

class Grandson(Son):
    dance =6
    guitar = 1

    basketball = 7

    # def __init__(self):
    #     self.basketball = 30000

    def isdance(self):
        return f"Jackson yeah!" \
            f"Yes I dance very awesomely {self.dance} no of times"

darry = Dad()
larry = Son()
harry = Grandson()

print(harry.basketball)

