import tkinter

window = tkinter.Tk()
window.title("Button GUI")

button_widget = tkinter.Button(window , text="Hello World!").pack()
window.geometry("500x300") 
window.mainloop()


