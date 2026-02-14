#factorial of given number


range_ = int(input("Enter the number to find its factorial : "))


factorial=1
for i in range(1,range_+1):
   factorial *= i
   
print(f"Factorial of {range_} is :{factorial} ") 