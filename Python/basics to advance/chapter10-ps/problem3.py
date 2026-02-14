from random import randint


class train:
    def __init__(self,train_no):
        self.train_no = train_no
         
    def book(self,from_ ,to_):
        print(f"Ticket Is Booked In Train No: {self.train_no} from {from_} to {to_} ")
        
        
    def getstatus(self):
         print(f"Train No: {self.train_no} Is Running On Time!")
    
    
    def getfair(self , from_ ,to_):
         print(f"Ticket Fair In Train No: {self.train_no} from {from_} to {to_} is {randint(500,5000)} ")
         
         

t =train(178003)
t.book("Hyderabad","Nagpur")
t.getstatus()
t.getfair("Hyderabad","Nagpur")
