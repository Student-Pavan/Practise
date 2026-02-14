from tkinter import *

window = Tk()
window.title("Button GUI")

topframe = Frame(window)
topframe.pack(side=TOP , expand=True ,fill=BOTH)


bottomframe = Frame(window)
bottomframe.pack(side=BOTTOM , expand=True ,fill=BOTH)

b1 = Button(topframe, text = "red" , background = "red" ,fg = "white" )
b1.pack(fill= BOTH , expand=True , side= TOP)

b1 = Button(topframe, text = "green" , background = "green" ,fg = "white" )
b1.pack(fill= BOTH , expand=True , side= BOTTOM)


b1 = Button(topframe, text = "blue" , background = "blue" ,fg = "white" )
b1.pack(fill= BOTH , expand=True , side= BOTTOM)


# window.geometry("500x300") 
window.mainloop()


