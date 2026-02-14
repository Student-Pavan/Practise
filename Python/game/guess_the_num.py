from random import randint

n = randint(1, 100)
a = -1

guesses = 0

while a != n:
    guesses += 1
    a = int(input("Guess the Number :"))
    if a > n:
        print("Lower number please")
    else:
        print("Higher number please")

print(f"You Guesed Correct Number {n} in {guesses} attempts!")
