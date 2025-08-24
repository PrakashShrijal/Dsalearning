class Reactangle :
    def __init__(self,length,breadth):
         print(f"A rectangle is created with length  :{length} and breath :{breadth}")
         self.length = length
         self.breadth = breadth
    def Area(self) :
          area = self.length*self.breadth
          return area   
    def perimeter(self) :
          per = 2*(self.length + self.breadth)
          return per
    
x = int(input("Enetr the Length of Rectangle :"))
y = int(input("Enetr the Breath of Rectangle :"))    
Reactangle1 = Reactangle(x, y)

       
Area = Reactangle1.Area()
perimeter = Reactangle1.perimeter()
print("Rectangle length is :",Reactangle1.length ,"breath is :",Reactangle1.breadth)
print("Area of Rectanle is :",Area)
print("perimeter  of Rectanle is :",perimeter)       