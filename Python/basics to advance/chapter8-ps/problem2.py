# =====> Converting Celsius to Fahrenheit & Fahrenheit to Celsius 

def celsiusToFahrenheit(celsius):
    return round(((9 / 5) * celsius) + 32, 2)

def fahrenheitToCelsius(fahrenheit):
    return round((fahrenheit - 32) * (5 / 9), 2)

def choice():
    print("Converting Celsius to Fahrenheit & Fahrenheit to Celsius")
    print("1. Convert Celsius ==> Fahrenheit")
    print("2. Convert Fahrenheit ==> Celsius")
    
    _choice = int(input("Enter your choice: "))

    if _choice == 1:
        celsius = float(input("Enter Celsius: "))
        print(f"{celsius}°C = {celsiusToFahrenheit(celsius)}°F")

    elif _choice == 2:
        fahren = float(input("Enter Fahrenheit: "))
        print(f"{fahren}°F = {fahrenheitToCelsius(fahren)}°C")

    else:
        print("Enter a correct input!")

choice()
