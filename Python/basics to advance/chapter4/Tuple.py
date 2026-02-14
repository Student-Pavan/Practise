fruits = (1,2,11,1,1,"apple","orange","kiwi","mango","strawberry" )

print(type(fruits)) #Tuples are immutable

print(fruits.count(1))

print(fruits.index("apple"))

print(fruits)

        #    Converting a tuple to a list

tuple_as_list = list(fruits)
print("Tuple converted to list:", tuple_as_list)

# Iterating through a tuple
print("Tuple elements:")
for item in fruits:
    print(item)
