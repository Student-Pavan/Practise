class Employee:
    salary = 234
    increment = 20
    
    @property
    def salaryAfterIncrement(self) :
        return self.salary+self.salary * (self.increment/100)
    
    @salaryAfterIncrement.setter
    def salaryAfterIncrement(self,newsalary):
        self.increment = (newsalary/self.salary-1)*100

e =Employee()
# print(e.salaryAfterIncrement)

e.salaryAfterIncrement = 280.8
print(f"{e.increment}%")