#  file i/o

f=open("file.txt")
data = f.read()
print(data)
f.close()

str = "how are you!"
f = open("file.txt" , "a")
f.write(str)
f.close()

f = open("file.txt")

lines = f.readlines()

print(lines)

f.close()
print(type(lines))


# ===> with statement 
with open("file.txt") as f :
    text = f.read()
    
print(text)