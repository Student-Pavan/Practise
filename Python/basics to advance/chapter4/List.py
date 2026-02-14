fruits = ["apple","orange","kiwi","mango","strawberry"]

print(type(fruits))

fruits[0] = "grapes" #unlike strings lists are mutable

fruits.append("banana") #append element at last

print(fruits.pop()) # pop element from last pop([index])

fruits.sort# sort alphabetical order
# for ele in fruits:
#     print(ele)
print(fruits)
fruits.insert(4,"water-melon") 

fruits.reverse()
print(fruits)

fruits.remove("kiwi")

print(fruits)
