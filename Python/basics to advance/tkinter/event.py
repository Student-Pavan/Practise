from tkinter import *

window = Tk()
window.title("Button GUI")

def eve(event):
    print("clicked" , event.x , event.y)
    
label = Label(window, text="click")
label.pack()
label.bind("<Button>", eve)

window.mainloop()