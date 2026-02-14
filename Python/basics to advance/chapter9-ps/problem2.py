import random
import os

def game():
    print("You are Playing Game...")
    score = random.randint(1, 100)

    path = r"C:\Users\K.Pavan Kumar\OneDrive\Desktop\programming_files\Python\basics to advance\chapter9-ps\game.txt"

    # Make sure the file exists first (create if missing)
    if not os.path.exists(path):
        with open(path, "w") as f:
            f.write("0")

    # Read the current high score
    with open(path, "r") as f:
        highscore = f.read().strip()
        highscore = int(highscore) if highscore else 0

    print(f"Your Score : {score}")
    print(f"Current High Score : {highscore}")

    # Update if new high score
    if score > highscore:
        print("🎉 New High Score!")
        with open(path, "w") as f:      # <-- write mode
            f.write(str(score))

    return score

game()
