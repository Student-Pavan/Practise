class Greet:
    @staticmethod
    def greet():
        print("HI")

greet_ = Greet()
greet_.greet()  # Calling the method

# OR
Greet.greet()  # Calling without an instance
