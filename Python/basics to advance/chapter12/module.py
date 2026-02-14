def myfunc():
    print("Hello world!")
 

if __name__=="__main__": #===> makes us to unable  run code in different name files acts as paaword or key
    # code executed directly by running the file in its present file 
    print("We are running code directly")
    myfunc()
    print(__name__)