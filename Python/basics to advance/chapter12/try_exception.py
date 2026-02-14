
# try:
#     a = int(input("enter Number : "))
#     print(a)
# except Exception as e:
#     print(e)

# try:
#     a = int(input("enter Number : "))
#     print(a)
# except ValueError as v:
#     print("Heyy") 
#     print(v)
# except Exception as e:
#     print(e)


a = int(input("Enter Number a :"))
b = int(input("Enter Number b :"))


if(b==0):
    raise ZeroDivisionError("Unable divide any number with zero")
else:
    print(f"value of a/b :{a/b}")