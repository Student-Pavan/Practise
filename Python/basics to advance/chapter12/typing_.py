from typing import TypedDict
from typing import List

def get_even_numbers(numbers: List[int]) -> List[int]:
    return [num for num in numbers if (even := num % 2 == 0)] # type: ignore

print(get_even_numbers([1, 2, 3, 4, 5, 6]))  # Output: [2, 4, 6]

class User(TypedDict):
    name: str
    age: int

user: User = {"name": "Alice", "age": 25}

if (age := user["age"]) > 18:
    print(f"User is an adult: {age}")  # Output: "User is an adult: 25"
