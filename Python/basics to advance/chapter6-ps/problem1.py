a = int(input("Enter Nnumber1: "))
b = int(input("Enter Nnumber2: "))
c = int(input("Enter Nnumber3: "))
d = int(input("Enter Nnumber4: "))

highest_num = a if (a > b and a > c and a > d) else (
              b if (b > c and b > d) else (
              c if (c > d) else d))
print(highest_num)