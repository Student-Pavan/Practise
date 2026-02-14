from tkinter import *

def on_key(event):
    label.config(text=f"You pressed: {event.char}")

window = Tk()
window.title("Keyboard Input")
window.geometry("300x150")

label = Label(window, text="Press any key...", font=("Arial", 16))
label.pack(expand=True)

# Bind key press event to the whole window
window.bind("<Key>", on_key)

window.mainloop()
