import random as r

range = input("Enter the Range of numbers : ")

if range.isdigit():
    range = int(range)
    if range <= 0 :
        print("Enet a number greater 0 next time! :(")
        quit()
else:
    print("type a number next timne! :(")
    quit()

random_range = r.randint(1,range)
gusses = 0
while True:
    gusses += 1
    guess = input("Make a Guess: ")
    if guess.isdigit():
        guess = int(guess)
    else:
        print("Type a number next time! :(")
        continue
    if guess == random_range:
        print("You got it right!")
        break

    else:
        print("you got it wrong! :(")
        
    
    
print(f"number of guesses : {gusses}")

