class Reactangle :
    def set_dimension(self,length,breadth) :
          self.length = length
          self.breath = breadth
    def Area(self) :
          area = self.length*self.breadth
          return area   
    def perimeter(self) :
          per = 2*(self.length + self.breadth)
          return per
Reactangle1 = Reactangle()
x = int(input("Enetr the Length of Rectangle :"))
y = int(input("Enetr the Breadth of Rectangle :"))
Reactangle1.set_dimension(x,y)        
Area = Reactangle1.Area()
perimeter = Reactangle1.perimeter()
print("Rectangle length is :",Reactangle1.length ,"breadth is :",Reactangle1.breadth)
print("Area of Rectanle is :",Area)
print("perimeter  of Rectanle is :",perimeter)       