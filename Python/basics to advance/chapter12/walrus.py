while (data := input("Enter something: ")) != "exit":
    print(f"You entered: {data}")

numbers = [1, 2, 3, 4, 5, 6]
filtered = [num for num in numbers if (even := num % 2 == 0)]
print(filtered)  # [2, 4, 6]

num = 9
number = "Even" if (num % 2) == 0 else "Odd" #type: ignore

print(number)  # Output: "Odd"

num = 9

if (is_even := (num % 2) == 0):  # type: ignore # Assigns True/False to 'is_even'
    number = "Even"
else:
    number = "Odd"

print(number)  # Output: "Odd"
