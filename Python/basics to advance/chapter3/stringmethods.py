name = "pavan_"



print(name.endswith("_"))    #returns true 

print("Ends with '_':", name.endswith("_"))  # True

print("Starts with 'p':", name.startswith("p"))  # True

print("Uppercase:", name.upper())  # "PAVAN_"

print("Lowercase:", name.lower())  # "pavan_"

print("Title Case:", name.title())  # "Pavan_"

print("Capitalized:", name.capitalize())  # "Pavan_"

print("Reversed:", name[::-1])  # "_navap"

print("Length:", len(name))  # 6

print("Is Alpha:", name.isalpha())  # False (contains '_')

print("Is Alphanumeric:", name.isalnum())  # False (contains '_')

print("Is Digit:", name.isdigit())  # False

print("Find 'a':", name.find("a"))  # 1 (index of first 'a')

print("Count of 'a':", name.count("a"))  # 2

print("Replace 'a' with '@':", name.replace("a", "@"))  # "p@v@n_"

print("Split by '_':", name.split("_"))  # ['pavan', '']

print("Strip '_':", name.strip("_"))  # "pavan"


# Justification methods
print("Left Justified (10 width, '-'): ", name.ljust(10, '-'))

print("Right Justified (10 width, '-'): ", name.rjust(10, '-'))

print("Centered (10 width, '-'): ", name.center(10, '-'))
