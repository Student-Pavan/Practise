# names =["harry" , "Sachin", "sunil","rahul"]


# for name in names:
#     if name.startswith(("s","S")):
#         print(f"Hello {name}")



number = int(input("Enter the Number :"))

for i in range(2,number):
    if(number%i == 0):
        print("NOT A PRIME NUMBER")
        break
    else :
        print("PRIME NUMBER")
        break