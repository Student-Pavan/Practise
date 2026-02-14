name = input("enter your name : ")

print(f"Good After Noon {name} ")   #f-string

letter = '''Dear |Name| 
Your Selected 
|Date|'''

print(letter.replace("|Name|","Pavan").replace("|Date|","23-12-2024"))

name = "Rahul Is A Good Boy"


print(name.find(" "))

print(name.replace(" ","  "))
